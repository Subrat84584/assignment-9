//write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
int main()
{
	int month,days;
	printf("enter your month number");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		   days=31;
		   break;
		case 4:
		case 6:
		case 9:
		case 11:
		    days=30;
			break;
		case 2:
		    days=28;
			break;
		default:
		    days=0;
			break;	
			
	}
	if(month)
	{
		printf("The days of this month %d is %d",month,days);
	}
	else
	printf("this is not a valid number");
	return 0;
}
						
