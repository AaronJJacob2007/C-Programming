#include <stdio.h>
int sum(int n)
{
return n? n%10+sum(n/10):0;
} 
int main()
{
int n;
scanf("%d",&n);
printf("%d",sum(n));
}
