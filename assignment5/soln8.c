#include<stdio.h>
int main()
{
	int i, j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=20;j++)
		{

			if((i>8)||((i<=8)&&((i+j)>7)&&(j<12)))
					printf("*");
					else
					printf("0");
					}
		printf("\n");
					}
					}
