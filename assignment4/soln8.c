#include<stdio.h>
void main()
{
	for(int a=1;a<=100;a++)
		if(((a%3==0)||(a%5==0))&&(a%15!=0))
			printf("%d\n",a);
}
			
