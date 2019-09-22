#include<stdio.h>
void main()
{
	int i,j;
	for(j=0;j<5;j++)
	{
		for(i=0;i<20;i++)
		{
			if((j%2==0)||((i+j)%2==1))
			{
				printf("*");
			}
			else
			{
				printf("O");
			}
		}
		printf("\n");
	}
}
