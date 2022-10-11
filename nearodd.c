#include<stdio.h>
int main()
{
	int number;
	printf("enter your even number");
	scanf("%d",&number);
	switch(number%2==0)
	{
		case 1:
			printf("nearest number odd number is:%d",number+1);
			
	}
	return 0;
}
