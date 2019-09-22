#include<stdio.h>
#include<math.h>
void main()
{
	float d,b,c,z,k,l;
	printf("enter the sides of triangle=\n");
	scanf("%f %f %f",&d,&b,&c);
	z= (b*b + c*c - d*d)/2*b*c;
	k=acos(z);
	l=k*180/3.14;
	printf("%f",l);
}
