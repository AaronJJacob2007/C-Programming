#include <stdio.h>
int fact(int n){
    if(n==0||n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main(){
    int n;
    int c;
    printf("Enter no:");
    scanf("%d",&n);
    if(n<0){
    printf("Factorial not applicable for negative numbers");
    getch();
    return 0;}
    c=fact(n);
    printf("Factorial %d",c);
    getch();
    return 0;
}
