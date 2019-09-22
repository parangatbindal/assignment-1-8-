#include<stdio.h>
int main()
{
int i,j,a=1;
for(i=1;i<=6;i++)
{  
for(j=1;j<=1+((6-i)*a);j=j+a)
{
        printf("%c",(64+j));
}
a++;
printf("\n");
}
}

