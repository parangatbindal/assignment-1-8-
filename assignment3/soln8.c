#include<stdio.h>
#include<math.h>
void main()
{
        float a,b,c;
	printf("enter three numbers=\n");
	scanf("%f %f %f",&a,&b,&c);
	if((a==b)&&(a!=c))
		printf("%f",c);
	else if((a!=b)&&(a==c))
		printf("%f",b);
	else if((a!=b)&&(b==c))
		printf("%f",a);
}
