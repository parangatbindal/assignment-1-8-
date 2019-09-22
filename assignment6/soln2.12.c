#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<=6;i++)
{
for(j=1;j<=i;j++)
{
	printf("%c",(64+j));
}
for(k=1;k<=(6-i);k++)
{
printf("%c",(96+k));
}
printf("\n");
}
}
