#include <stdio.h>
#include <string.h>
int main()
{
char s[5][50],t[50];
int i,j; 
for(i=0;i<5;i++)
fgets(s[i],50,stdin); 

for(i=0;i<5;i++)
for(j=i+1;j<5;j++) 
if(strcmp(s[i],s[j])>0){
strcpy(t,s[i]);
strcpy(s[i],s[j]);
strcpy(s[j],t);} 

for(i=0;i<5;i++)
puts(s[i]);
}
