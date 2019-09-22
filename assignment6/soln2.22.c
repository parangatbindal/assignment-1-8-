#include<stdio.h>
int main()
{
int i,j,a=1,b=0;
for(i=1;i<=5;i++)
{
for(j=i;j<(i+a);j++)
{
        printf("%c",(64+j));

}
b++;
a=a+b;
printf("\n");
}
}

