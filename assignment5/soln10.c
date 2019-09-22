#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{

	for(j=1;j<=20;j++)
	{
		if((i<=2)||((i>=3)&&(((i+j)<10)||((j>=(2*i)+3)))))
			printf("*");
		else
			printf("0");
	}
	printf("\n");
	}
}
