#include<stdio.h>
void main()
{
      int i,x,a,n,q=0;
      float avg, sum=0;
              printf("give n:");
              scanf("%d",&n);
              printf("give %d numbers:",n);
              for(i=1;i<=n;i++)
              {
                      scanf("%d",&x);
		      if(x%2==0)
		      {
			      a=i*x;
		      q=q+i;
		      sum=sum+a;
		      }
	      }
	       avg=sum/q;
	      printf("%f",avg);
}

