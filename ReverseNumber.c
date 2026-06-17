#include<stdio.h>
int main(){
	int n,p,rev;
	printf("Enter No");
	scanf("%d",&n);
	rev=0;
	while(n>0)
	{
		p=n%10;
		//rev=(rev+p)*10;
		rev=(rev*10)+(n%10);
		n=n/10;
		
	}
	//rev=rev/10;
	printf("%d",rev);
}
