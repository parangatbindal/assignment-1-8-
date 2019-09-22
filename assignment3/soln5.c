#include<stdio.h>
void main()
{
        float a,b,c;
        float slope;
	printf("eq. of a line is= a*x + b*y + c\n");
        printf("enter the values of a,b,c\n");
	scanf("%d %d %d",&a,&b,&c);
	if(b==0)
	{
		printf("line is vertical\n");
	        printf("\nslope is infinite");
	}
	else
	{
		slope=(-a)/b;
	printf("%f",slope);
	}
}
