#include <conio.h>
int main()
{
    float temp,ftemp;
    printf("Enter temperature in celsius:\n");
    scanf("%f",&temp);
    ftemp=1.8*temp+32;
    printf(" Temperature in Fahrenheit: %.2f \n",ftemp);
    
    if(temp<0)
    printf("Freezing Weather");
    if(temp>=0&& temp<=20)
    printf("Cold Weather");
    if(temp>=21&& temp<=35)
    printf("Moderate Weather");
    if(temp>35)
    printf("Hot Weather");
    getch();
    return 0;
}
    
    
