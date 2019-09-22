#include<stdio.h>
void main()
{
	int a;
	for(a=0;a<=90;a++)
	{
		if(a%2!=0)
		{
			if((a>=0&&a<=9)||(a>=20&&a<=29)||(a>=40&&a<=49)||(a>=80&&a<=89))
				printf("%d\n",a);
		}
	}
         for(int k=10;k<=99;k++)
	 {
		 if(k%2==0)
		 {
			if((k>=10&&k<=19)||(k>=30&&k<=39)||(k>=90&&k<=99))
				printf("%d\n",k);
		 }
	 }
}
