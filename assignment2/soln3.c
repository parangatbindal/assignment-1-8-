#include<stdio.h>
void main()
{
	float a,b,c,d,e,f,area;
	printf("\ncoordinate of the point (a,b),(c,d),(e,f)");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
        area=(0.5)*((a*(d-f))-(b*(c-e))+ ((c*f)-(d*e)));
	if(area<0)
	{
		area= area*(-1);
	}

	printf("the resultant area of the triangle is =%f",area);
}
