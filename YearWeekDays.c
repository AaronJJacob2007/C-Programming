#include<stdio.h>
int main(){

int days,yr,wk,d;
printf("Enter input:");
scanf("%d",&days);
yr=days/365;
days=days%365;
wk=days/7;
days=days%7;
d=days;
printf("Years:%d Weeks:%d Days:%d",yr,wk,d);
}
