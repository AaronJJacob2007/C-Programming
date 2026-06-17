#include<stdio.h>
int main(){
	int n,i,c,a,b;
	printf("Enter n");
	scanf("%d",&n);
	printf("Fibonacci Series");
	a=0;
	b=1;
	
   for(i=1;i<=n;i++)
	{   printf("%d",a);
		c=a+b;
		a=b;
		b=c;
		
		
	}
}
