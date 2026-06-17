#include <conio.h>
int main()
{
    int opt,tno=0,cancel=0,total=0,cost=0,t2=0,canc=0;
    while(opt!=4 ){
    printf("\nEnter 1 to Book a ticket: \n");
    printf("Enter 2 to Cancel a ticket: \n");
    printf("Enter 3 to Show tickets sold: \n");
    printf("Enter 4 to Exit: \n ");
    scanf("%d",&opt);
    
    switch(opt)
    {
    case 1:
         printf("Enter number of tickets you want to book \n");
         scanf("%d",&tno);
         t2+=tno;
         total=t2-cancel;
         cost=total*200;
         break;
    case 2:
         printf("Enter number of tickets you want to cancel \n");
         scanf("%d",&canc);
         cancel+=canc;
         total=t2-cancel;
         cost=total*200;
         break;
    case 3:
         total=t2-cancel;
         printf("Total number of tickets sold : %d \n",total);
         cost=total*200;
         printf("Total number of tickets sold :  %d \n",cost);
         break;
    case 4:
         printf("Total number of tickets sold: %d \n",total);
         printf("Cost: %d \n ",cost);
         printf("You have exited the system \n");  
         break;
        
        }
        }
        getch();
        return 0;
         
    
}
