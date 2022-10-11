//write a menu driven program with the following option.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x;
	int a,b;
	while(1)
	{
	printf("\n1:Addition");
	printf("\n2:subtraction");
	printf("\n3:Multiplication");
	printf("\n4:Division");
	printf("\n5:exit\n");
	printf("enter your choice");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("enter two number for Addition");
			scanf("%d %d",&a,&b);
			printf("your result is %d",a+b);
			break;
		case 2:
			printf("enter two number for subtraction");
			scanf("%d %d",&a,&b);
			printf("subtraction is %d",a-b);
			break;
		case 3:
			printf("enter two number for Multiplication");
			scanf("%d %d",&a,&b);
			printf("product is %d",a*b);
			break;
		case 4:
			printf("enter two number for Division");
			scanf("%d %d",&a,&b);
			printf("quotient is %d",a/b);
			break;
		case 5:
			exit(0);
		default:
			printf("invalid");
		}
			
	}//while end
	return 0;
	
}
