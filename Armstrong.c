#include<stdio.h>
#include<math.h>
int main(){
    int n,t,sum=0,p,count=0;
    printf("Enter No");
    scanf("%d",&n );
    t=n;
    while(t>0)
    {count++;
    t=t/10;
	}
    p=n;
    while(n>0)
    {
    	sum+=pow((n%10),count);
    	n=n/10;
	}
	if(sum==p)
	  printf("Armstrong");
	   else
	   printf("Not Armstrong"); 
	
}
