#include <conio.h>
int main()
{
    int opt,tno,cancel,total,cost;
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
         total=tno-cancel;
         cost=total*200;
         break;
    case 2:
         printf("Enter number of tickets you want to cancel \n");
         scanf("%d",&cancel);
         total=tno-cancel;
         cost=total*200;
         break;
    case 3:
         total=tno-cancel;
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
    
