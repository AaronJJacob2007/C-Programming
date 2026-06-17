#include<stdio.h>
int main(){
    float c,f;
    int choice;
    printf("Choose 1 to input temperature in Fah");
    printf("Choose 2 to input temp in Cel ");
    printf("Enter choice");
    scanf("%d",&choice);
    
    
    if(choice==1)
    { printf("Enter temp in Fah");
     scanf("%f",&f);
     c = ((f - 32) * 5 )/ 9;
     printf("Temp in Celsius %f",c);
     }
     if(choice==2)
     { printf("Enter temp in Cel");
       scanf("%f",&c);
       f = ((c * 9) / 5) + 32;
       printf("Temp in Fah %f",f);
       }
       getch();
       return 0;
       }
    
