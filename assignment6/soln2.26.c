#include<stdio.h>
int main()
{
int i,n,j,k=4;
for(i=1;i<=7;i++)
{
	for(j=0;j<=10;j++)
	{
		n=k*j;
		if(n<=30)
		{
			printf("%d,",n);
		}
		else
		{
			continue;
		}
	}
	k++;
	printf("\n");
}
}

