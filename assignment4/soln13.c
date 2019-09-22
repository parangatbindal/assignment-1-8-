#include<stdio.h>
void main()
{
	for(int a=1;a<=100;a++)
	{
		int b,c;
		b=a/10;
		c=b%3;
		if(c==1)
			printf("%d\n",a);
	}
}
