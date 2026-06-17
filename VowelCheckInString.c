#include <stdio.h>
int main()
{char s[100];
int i,c=0;
fgets(s,100,stdin);
 for(i=0;s[i];i++) 
 if(strchr("aeiouAEIOU",s[i])) 
 c++; 
 printf("%d",c);
 }
