//c program to find all roots of a quadratic equation using switch caes.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	float a,b,c,D,root,root1,root2,imaginary;
	printf("enter the value of a ,b and c of a equation aX^2,bX and c");
	scanf("%f %f %f",&a,&b,&c);
	D=(b*b)-(4*a*c);
	switch(D>0)
	{
		case 1:
			root1=(-b+sqrt(D))/(2*a);
			root2=(-b-sqrt(D))/(2*a);
			printf("The roots are:%0.2f and %0.2f",root1,root2);
			break;
		case 0:
			switch(D<0){
		case 0:
			root=-b/(2*a);
			printf("The root is:%f",root);
			break;
		case 1:
			root1=root2=-b/2*a;
			imaginary=sqrt(-D)/(2*a);
			printf("The root and imaginary part is:%f %f %f",root1,root2,imaginary);
			break;
			}
	}
	return 0;
	
}
