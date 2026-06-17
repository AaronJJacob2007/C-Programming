#include<stdio.h>
int main(){
    float si,ci,total,p,totsi,yr,r;
    printf("Enter principle:\n");
    scanf("%f",&p);
    printf("Enter no of years:\n");
    scanf("%f",&yr);
    printf("Enter rate of interest:\n");
    scanf("%f",&r);
    int i;
    total=p;
    totsi=p;
    for(i=1;i<=yr;i++)
    {
      si=p*(r/100);
      printf("SI for year %d is %f \n",i,si);
      totsi+=si;
      ci=total*(r/100);
      printf("CI for year %d is %f \n",i,ci);
      total+=ci;
      printf("\n");
      }
      printf("SI TOTAL is:%.2f \n",totsi-p);
      printf("CI TOTAL IS:%.2f",total-p);
      getch();
      return 0;
      }
      
    
