#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,s,ar,area;
	printf("enter the values of a,b,c respectively=");
	scanf("%f %f %f",&a,&b,&c);
	s=(a+b+c)/2;
	ar=(s*(s-a)*(s-b)*(s-c));
	area=sqrt(ar);
	printf("area=%f",area);
}
