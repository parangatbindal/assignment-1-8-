#include<stdio.h>
int main()
{
int i,j,c=0,d;
for(i=1;i<=6;i++)
{
	d=c;
for(j=1;j<=i;j++)
{
        printf("%c",(85-d-i+j));
	c++;
}
printf("\n");
}
}

