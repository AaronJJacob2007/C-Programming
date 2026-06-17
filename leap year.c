#include <conio.h>
int main()
{
     int yr;
     printf("input year: \t");
     scanf("%d",&yr);
     if(yr%4==0||yr%400==0)
     printf("The year %d is a leap year",yr);
     getch();
             return 0;
     }
     
