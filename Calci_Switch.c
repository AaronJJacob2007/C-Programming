#include<stdio.h>
int main(){
	float a,b,c;
	int choice;
	printf("Enter Number 1\n");
	scanf("%f",&a);
	printf("Enter Number 2\n");
	scanf("%f",&b);
	printf("Enter 1 for addition\n");
	printf("Enter 2 for subtraction\n");
	printf("Enter 3 for multiplication\n");
	printf("Enter 4 for division\n");
	scanf("%d",&choice);
	
	switch(choice){
	
	case 1:
		c=a+b;
		printf("%.3f",c);
		break;
		case 2:
		c=a-b;
		printf("%.3f",c);
		break;
		case 3:
		c=a*b;
		printf("%.3f",c);
		break;
		case 4:
		c=a/b;
		printf("%.3f",c);
		break;
		default:
			printf("Invalid Choice:");
			break;
		}
	
}
