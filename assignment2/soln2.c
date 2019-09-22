#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,k,L,D,dis;
	printf("\ncoordniat of point A is(a,b)");
	printf("\ncoordinate of point B is(c,d)");
	scanf("%f %f %f %f ",&a,&b,&c,&d);
	k=(a-c)*(a-c);
	L=(b-d)*(b-d);
	D=k+L;
	dis=sqrt(D);
	printf("the resultant distance b/w the point is=%f",dis);
}
