#include <stdio.h>

struct Account {
    int accno;
    char name[50];
    float balance;
};

int main() {
    struct Account a;
    float amt;

    printf("Enter Account Number: ");
    scanf("%d", &a.accno);
    getchar();  

    printf("Enter Holder Name: ");
    fgets(a.name, 50, stdin);

    printf("Enter Balance: ");
    scanf("%f", &a.balance);

    printf("Enter Withdrawal Amount: ");
    scanf("%f", &amt);

    if(amt > a.balance)
        printf("Insufficient Balance");
    else {
        a.balance -= amt;
        printf("Updated Balance = %.2f", a.balance);
    }

    return 0;
}
