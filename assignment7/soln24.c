
#include<stdio.h>
void main()
{
    int a;
    printf("enter the number:\n");
    scanf("%4d",&a);
    printf("your number's second number is:%d",(a-((a/10)*10)));
}
