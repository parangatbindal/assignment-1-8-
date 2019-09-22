#include<stdio.h>
#include<math.h>
void main()
{
	float h,k,r,s,m,l,length;
	printf("centre of the circle is (h,k)\n");
	printf("eq. of line is x=s\n");
	printf("values of h,k,r,s respct=\n");
	scanf("%f %f %f %f",&h,&k,&r,&s);
	m=(r*r - (h-s)*(h-s));
	l=sqrt(m);
	length=2*l;
	printf("length of the chord is=%f",length);
}
