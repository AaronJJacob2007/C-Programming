#include<stdio.h>
int prime(int n){
	int i,c=0;
	for(i=1;i<=n;i++){
	if(n%i==0)
	
		c++;
	}
	return c;
}
int main(){
	int n,c;
	printf("Input No");
	scanf("%d",&n);
	c=prime(n);
	if(c==2)
	printf("Prime");
	else
	printf("Not Prime");
	
}
