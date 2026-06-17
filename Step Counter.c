#include<stdio.h>
int main()
{
	int total=0,steps,avg,i=1;
	for(i;i<=7;i++){
		printf("enter no. steps of day %d: ",i);
		scanf("%d",&steps);
	total=total+steps;}
	printf("total steps are %d\n",total);
    avg=total/7;
    printf("average of steps is %d",avg);
	printf("\n_________________________________________________");
	if(avg<=5000)
		printf("\ntry to be more active. ");
	else if(avg<=9999 && 5000<avg)
		printf("\ngood job! keep going");
	else if(avg>=10000)
		printf("\nEXCELLENT! you`re very active");
		getch();
	return 0;
}

    
