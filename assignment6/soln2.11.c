#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<=6;i++)
{
for(j=1;j<i;j++)
{
	printf(" ");
}
for(k=i;k<=6;k++)
{
printf("%c",(64+k));
}
printf("\n");
}
}
