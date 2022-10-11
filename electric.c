//electricity program
#include<stdio.h>
int main()
{
	int unit;
	float bill;
	printf("enter your unit");
	scanf("%d",&unit);
	switch(unit)
	{
		case 1 ... 50:
			bill=unit*0.5;
			printf("Total Bill is:%0.02f",bill);
			break;
		case 51 ... 150:
			bill=(50*0.5)+(unit-50)*0.75;
			printf("Total bill is:%0.02f",bill);
			break;
		case 151 ... 250:
			bill=(50*0.5)+(100*0.75)+(unit-150)*1.2;
			printf("Total bill is:%0.02f",bill);
			break;
		case 251 ... 500:
			bill=(50*0.5)+(100*0.75)+(100*1.2)+(unit-250)*1.5;
			printf("Total bill is:%0.02f",bill);
			break;
		default:
			printf("invalid");
			
	}
	return 0;
}
