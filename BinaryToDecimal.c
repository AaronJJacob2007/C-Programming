#include <stdio.h>
int main(){
int b,p=1,d=0;
scanf("%d",&b); 
while(b)
{d+= (b%10)*p;
 p*=2; 
 b/=10;
 }
  printf("%d",d);
  }
