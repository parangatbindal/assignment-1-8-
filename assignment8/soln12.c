#include<stdio.h>
void main()
{
      int i,x,n,sum=0;
              printf("give n:");
              scanf("%d",&n);
              printf("give %d numbers:",n);
              for(i=1;i<=n;i++)
              {
                      scanf("%d",&x);
		      if(x>30&&x<90)
			      sum=sum+x;
	      }
	      printf("%d",sum);
}

