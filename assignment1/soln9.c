#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("enter the value=");
	scanf("%d",&a);
	b=a/100;
	c=a%10;
	d=(b*10)+c;
	printf("the resultant is=%d",d);
}
