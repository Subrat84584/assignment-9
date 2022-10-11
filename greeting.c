//write a program which takes the day number of a week and display a unique greeting massage for the day.
#include<stdio.h>
int main()
{
	int daynum;
	printf("enter your day number of a week");
	scanf("%d",&daynum);
	switch(daynum)
	{
		case 1:
			printf("enjoy your day with full pack of happy");
			break;
		case 2:
			printf("gods makes rule for all equaly");
			break;
		case 3:
			printf("respect your parents");
			break;
		case 4:
			printf("makes good friends");
			break;
		case 5:
			printf("respect your teacher is the top one priority in your life");
			break;
		case 6:
			printf("follow your passion and make it profession");
			break;
		case 7:
			printf("Be Healthy");
			break;
		default:
			printf("invalid number");
	}
	return 0;
}
