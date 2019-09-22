#include<stdio.h>
void main()
{
	int x,y;
	for(x=0;x<10;x++)
	{
		for(y=0;y<20;y++)
		{
			if((x<=2&&y<=7)||(y>14&&x>6))
			{
				printf("O");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
