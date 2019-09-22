#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,g,f,centre,k,radius;
	printf("enter the value of a,b,c\n");
	printf("the eq. of the circle is x*x + y*y + a*x + b*y + C\n");
	scanf("%f %f %f",&a,&b,&c);
	g=a/2;
	f=b/2;
	k=(g*g + f*f - c);
	radius=sqrt(k);
	printf("(");
	printf("%f",-g);
	printf(",");
	printf("%f",-f);
	printf(")\n");
	printf("\nradius of the circle is=%f",radius);
}

