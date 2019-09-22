#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,D,l,m,k,n;
	printf("eq. is a*x*x + b*x + c\n");
	printf("values of a,b,c=\n");
	scanf("%f %f %f",&a,&b,&c);
	k=(b*b) - (4*a*c);
	l=sqrt(k);
	m= (-b + l)/(2*a);
	n= (-b -l)/(2*a);
	D=(b*b) - (4*a*c);
	if(D>0)
	printf("roots are=%f %f",m,n);
	else if(D==0)
	printf("root is=%f",m);
	else 
	{
	float A,B,C,E,F;
	A= -b/(2*a);
	C=k*(-1);
	E=sqrt(C);
	B=E/(2*a);
	F=-E/(2*a);
	printf("%f %f %f",A,B,F);
	}

}	
	

