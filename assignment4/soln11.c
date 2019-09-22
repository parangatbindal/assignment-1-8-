#include<stdio.h>
void main()
{
	for(int a=0;a<100;a++)
	{
		int b,c,d;
         b=a%10;
	 c=a/10;
	 d=b+c;
	 if(d%7==0)
		 printf("%d\n",a);
         } 
}
