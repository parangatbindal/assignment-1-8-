#include<stdio.h>
void main()
{
	for(int a=1;a<=100;a++)
	{
		int b;
	b=a%10;
	  if(b>=5&&b<=8)
		  printf("%d\n",a);
	}
}
