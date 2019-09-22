#include<stdio.h>
void main()
{
      int i,x,a=0,b,c,n,sum=0;
              printf("give n:");
              scanf("%d",&n);
              printf("give %d numbers:",n);
              for(i=1;i<=n;i++)
              {
                      scanf("%d",&x);
		      b=a;
		      a=x;
		      c=a*b;
		      sum=sum+c;
	      }
	      printf("%d",sum);
}

