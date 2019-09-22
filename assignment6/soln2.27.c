#include<stdio.h>
int main()
{
int i,j,k=4,n;
for(i=1;i<=7;i++)
{
for(j=0;j<=(8-i);j++)
{
	n=j*k;
        printf("%d,",n);
}
k++;
printf("\n");
}
}

