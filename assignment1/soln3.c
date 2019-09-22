#include<stdio.h>
void main()
{
	int a,b,c,p,y;
	printf("enter the value of variable p whose value is to be put in a equation");
	printf("\nenter the value of the constants a,b,c respectively=");
	scanf("%d %d %d %d",&a,&b,&c,&p);
	y=a*p*p + b*p + c;
	printf("\nthe resultant solution is=%d",y);
}
