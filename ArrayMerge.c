#include <stdio.h>
int main(){
int a[50],b[50],c[100],n,m,i;
scanf("%d%d",&n,&m); 
for(i=0;i<n;i++)
scanf("%d",&a[i]); 
for(i=0;i<m;i++)
scanf("%d",&b[i]); 
for(i=0;i<n;i++)
c[i]=a[i]; 
for(i=0;i<m;i++)
c[n+i]=b[i]; 
for(i=0;i<n+m;i++)
printf("%d ",c[i]);}
