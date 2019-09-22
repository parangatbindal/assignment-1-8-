#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,p,q,r,X,Y;
	printf("eq. of lines are a*x + b*y +c\n p*x + q*y + r\n");
	printf("enter the value of a,b,c,p,q,r\n");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&p,&q,&r);
	X=(q*c - b*r)/(b*p - a*q);
	Y=(a*r - c*p)/(b*p - a*q);
	printf("(");
	printf("%f",X);
	printf(",");
	printf("%f",Y);
	printf(")");
}

