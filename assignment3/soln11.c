#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the values of a,b,c=\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c&&b>c)
		printf("%d",b);
	else if(a>b&&a>c&&c>b)
		printf("%d",c);
	else if(b>a&&b>c&&a>c)
		printf("%d",a);
	else if(b>a&&b>c&&c>a)
		printf("%d",c);
	else if(c>a&&c>b&&a>b)
		printf("%d",a);
	else if(c>a&&c>b&&b>a)
		printf("%d",b);
}


