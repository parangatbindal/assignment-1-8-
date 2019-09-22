#include<stdio.h>
void main()
{
	for(int a=10;a<=89;a++)
	{
		if(a%2==0)
		{
			if((a>=10&&a<=29)||(a>=40&&a<=59)||(a>=70&&a<=89))
				printf("%d\n",a);
		}
	}
}
