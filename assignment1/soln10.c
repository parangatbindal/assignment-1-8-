#include<stdio.h>
void main()
{
	int a,b,c,d,e,f;
	printf("enter the value=");
	scanf("%d",&a);
	b=a/100;
	c=a%10;
	d=a/10;
	e=d%10;
	f=(b*100)+(c*10)+e;
	printf("the resultant is=%d",f);
}
