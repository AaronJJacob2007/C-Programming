#include <conio.h>

int main()
{
int plf,hr,dplf;
char v;
printf("Enter type of vehicle:\n");
printf("Enter B for a Bike\nEnter C for a Car\nEnter T for a Truck \n");
scanf("%c",&v);
if(toupper(v)!='B'&&toupper(v)!='C'&&toupper(v)!='T'){
printf("Invalid Choice!!");
getch();
return 0;}
printf("Enter no of hours parked \n");
scanf("%d",&hr);

if(toupper(v)=='B'){
plf=hr*10;
 if(plf>200){
dplf=(0.9)*plf;
printf("Parking lot fees for your bike is: %d",dplf);}
 else{
printf("Parking lot fees for your bike is: %d",plf);
}
}
  if(toupper(v)=='C')
{
plf=hr*20;
if(plf>200)
{
dplf=(0.9)*plf;
printf("Parking lot fees for your car is: %d",dplf);}
 else{
printf("Parking lot fees for your car is: %d",plf);
}
}
if(toupper(v)=='T')
{
plf=hr*50;
if(plf>200)
{
dplf=(0.9)*plf;
printf("Parking lot fees for your truck is: %d",dplf);}
 else{
printf("Parking lot fees for your truck is: %d",plf);
}
}

getch();
return 0;


}
