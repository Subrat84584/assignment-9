//program to check whether a year is a leap year or not.using switch statement.
#include<stdio.h>
int main()
{
	int year,reminder;
	printf("enter a year");
	scanf("%d",&year);
	reminder=((year%4==0)&&((year%400==0)||(year%100!=0)));
	switch(reminder)
	{
		case 1:
			printf("Leap year");
			break;
		case 0:
			printf("Not leap year");
			break;
		default:
			printf("invalid");
	}
	return 0;
}
