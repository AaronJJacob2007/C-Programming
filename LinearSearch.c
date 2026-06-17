#include <stdio.h>
int main()
{
int a[100],n,i,srch;
printf("Enter no of elements:");
scanf("%d",&n); 
for(i=0;i<n;i++){

scanf("%d",&a[i]); 
}
printf("Enter element to be searched");
scanf("%d",&srch); 

for(i=0;i<n;i++) 
if(a[i]==srch)
{
printf(" Element Found");
return 0;
} 
printf(" Element Not Found");
}
