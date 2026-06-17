#include <conio.h>
int main()
{
    int yr,i;
    float p,interest,total=0,ci;
    printf("Enter principal amount: \n");
    scanf("%f",&p);
    printf("Enter no of years: \n");
    scanf("%d",&yr);
    if(p<10000){
    interest=0.05;}
    else if(p>=10000 && p<=50000){
    interest=0.07;}
    else{
    interest=0.1;}
    
    total=p;
    
    for(i=1;i<=yr;i++){
    ci=total*interest;
    printf("Year %d interest is :%.3f\n",i,ci);
    total+=ci;}
    printf("Total amount is:%.3f",total);
    
    getch();
    
    return 0;
}
    
    
    
    
