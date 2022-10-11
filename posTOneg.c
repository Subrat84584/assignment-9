#include<stdio.h>
int main()
{
	int x,pos,neg;
	printf("\n1.positive number in to negetive");
	printf("\n2.negetive number to positive\n");
	printf("\nenter your choice");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("enter a positive number");
			scanf("%d",&pos);
			pos=pos*-1;
			printf("your negetive number is:%d",pos);
			break;
		case 2:
			printf("enter your negetive number");
			scanf("%d",&neg);
			neg=neg*-1;
			printf("your positive number is:%d",neg);
			break;
		default:
			printf("invalid");
	}
	return 0;
}
