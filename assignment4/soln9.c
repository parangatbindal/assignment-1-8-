#include<stdio.h>
void main()
{
	for(int k=1;k<=100;k++)
	{
	      int b;
	b=k%10;
	if(b%3==0)
		printf("%d\n",k);
	}
}
