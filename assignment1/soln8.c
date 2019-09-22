#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("enter the number whose last digit is less than5");
	printf("\nenter the value=");
	scanf("%d",&a);
	b=a%10;
	c=b*2;
	d=(a-b)+c;
	printf("the resultant is=%d",d);
}
