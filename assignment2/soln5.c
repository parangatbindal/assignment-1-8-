#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,e,y,Y,k,dist,x;
	printf("enter the values of a,b,c,d,e respct.\n");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	printf("equation of the line is c*x + d*y + e\n");
	Y=(c*c + d*d);
	k=sqrt(Y);
	dist=(a*c + b*d + e)/k;
	if(dist<0)
         {
	dist=dist*(-1);
          }
	printf("distance is=%f",dist);

}

