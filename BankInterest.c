#include<stdio.h>
#include<math.h>

int main()
{
  float i,pa,t,ta,r,Interest;
  printf("\nEnter the principal amount: ");
  scanf("%f",&pa);
  printf("\nEnter the duration in years: ");
  scanf("%f",&t);
  if(pa>50000){
  r=0.1;}
  else if(pa>5000 && pa<50000) {
  r=0.07;}
  else{
  r=0.05;}
  for(i=1;i<=t;i++) {
  ta=pa*pow(1+r, i);
  Interest=ta-pa;
  printf("\nYour compound interest after %.0f years is %.2f",i,Interest);
  }
  printf("\n_________________________________________");
  printf("\nTotal amount after %.0f years is: %.2f",t,ta);
  
  getch();
  return 0;
}
