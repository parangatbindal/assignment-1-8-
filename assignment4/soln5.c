#include<stdio.h>
void main()
{
	for(int a=1;a++;)
		if(a%3==0||a%7==0)
			printf("%d\n",a);
}
