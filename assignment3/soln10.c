#include<stdio.h>
void main()
{
	int a,b,c,d,x;
	printf("enter the values of a,b,c,d,x respc.\n");
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&x);
	if((x==a&&x!=b&&x!=c&&x!=d)||(x==b&&x!=a&&x!=c&&x!=d)||(x==c&&x!=a&&x!=b&&x!=d)||(x==d&&x!=a&&x!=b&&x!=c))
		printf("1");
	else if((x==a&&x==b&&x!=c&&x!=d)||(x==a&&x==c&&x!=b&&x!=d)||(x==a&&x==d&&x!=c&&x!=b)||(x==b&&x==c&&x!=a&&x!=d)||(x==b&&x==d)||(x==c&&x==d))
		printf("2");
	else if((x==a&&x==b&&x==c)||(x==a&&x==b&&x==d)||(x==b&&x==c&&x==d)||(x==c&&x==d&&x==a))
			printf("3");
	else if(x==a&&x==b&&x==c&&x==d)
		printf("4");
	else
		printf("0");
}

