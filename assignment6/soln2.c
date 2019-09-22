#include<stdio.h>
int main()
{
int i,j;
for(i=0;i<5;i++)
{
for(j=4;j>=i;j--)
{
printf("%c",(65+j-i));
}
printf("\n");
}
}

