#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,Y,x,y,slope;
	printf("enter the value of a,b,c respectively\n");
	scanf("%f %f %f",&a,&b,&c);
	Y=a*x + b*y + c;
	slope=(-a)/b;
	printf("slope the line is=%f",slope);
}

