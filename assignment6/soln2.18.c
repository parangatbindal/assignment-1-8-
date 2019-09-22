#include<stdio.h>
int main()
{
int i,j,k,l;
for(i=1;i<=5;i++)
{
for(j=1;j<=(5-i);j++)
{
	printf(" ");
}
for(k=1;k<=i;k++)
{
printf("%c",(64+k));
}
for(l=(k-1);l>1;l--)
{
	printf("%c",(64+l-1));
}
printf("\n");
}
}


