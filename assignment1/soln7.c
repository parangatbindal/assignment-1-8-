#include<stdio.h>
void main()
{
	int a,b,c,d,sum;
	printf("enter the value=");
	scanf("%d",&a);
	b=a%100;
	c=b/10;
	d=a%10;
	sum=c+d;
	printf("the resultant is=%d",sum);
}
