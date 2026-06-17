#include<stdio.h>
int rec(int n){
	if(n==0)
	return 1;
	if(n==1)
	return 1;
	
	return n*rec(n-1);
}
int main(){
	int n,c;
	printf("Enter No");
	scanf("%d",&n);
	c=rec(n);
	printf("Factorial is %d",c);
	
	return 0;
}
