#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=15;j++)
		{
			if(i%2==0)
			{
				if((j<(i-1))||((j>(i+1))&&(j%2==1)))
					printf("*");
				else
					printf("0");
			}
			else
			{
				if((j<=i)||((j>i)&&(j%2==0)))
					printf("0");
				else
					printf("*");
			}

		}
		printf("\n");

	}}
