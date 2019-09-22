#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=6;i++)
{
	int a=1,b=1;
for(j=1;j<=i;j++)
{
	b++;
        printf("%d",a);
	a=a+b;
}
printf("\n");
}
}

