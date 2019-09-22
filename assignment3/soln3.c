#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the values of a,b=\n");
	scanf("%d %d",&a,&b);
	if(a>b)
		printf("%d\n%d",a,b);
	else
		printf("%d\n%d",b,a);
}
