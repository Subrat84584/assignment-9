#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,a,b,c;
	while(1)
	{
       printf("\n1.check whether a given set of three numbers are lenght of an isosceles triangle or not");
	   printf("\n2.check whether a given set of three numbers are length of sides of a right angled triangle or not");
	   printf("\n3.check whether a given set of three numbers are equilateral triangle or not");
	   printf("\n4.Exit");
	   printf("\nenter your choice");
	   scanf("%d",&x);
	   switch(x)
	   {
	   	case 1:
	   		printf("enter the three sides of triangle");
	   		scanf("%d %d %d",&a,&b,&c);
	   		if(a==b||b==c)
	   		printf("\nThis is isosceles triangle");
	   		else
	   		printf("This is not isosceles triangle");
	   		break;
	   	case 2:
	   		printf("enter the three sides of triangle");
	   		scanf("%d %d %d",&a,&b,&c);
	   		if((a*a)+(b*b)==(c*c)||(b*b)+(c*c)==(a*a)||(c*c)+(a*a)==(b*b))
	   		printf("This is right angle triangle");
	   		else
	   		printf("This is not right angle triangle");
	   		break;
	   	case 3:
	   		printf("enter the three sides of triangle");
	   		scanf("%d %d %d",&a,&b,&c);
	   		if(a==b&&b==c)
	   		printf("This is equilateral");
	   		else
	   		printf("This is not equilateral");
	   		break;
	   	case 4:
	   		exit(0);
	   	default:
	   		printf("invalid number");
	   }
    }
	
	
	return 0;
}
