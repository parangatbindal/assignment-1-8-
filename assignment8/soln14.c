#include<stdio.h>
void main()
{
      int i,x,y,n,z,m,k,sum,sum1=0,sum2=0;
              printf("give n:");
              scanf("%d",&n);
              printf("give %d numbers:",n);
              for(i=1;i<=n;i++)
              {
                      scanf("%d",&x);
		      y=x%10;
		      z=x/10;
		      k=z%10;
		      m=z/10;
		      if(y>k)
             {
		     sum1=sum1+x;
	     }
		      else 
             {
		     n=(((m*10)+y)*10)+k;
		     sum2=sum2 + n;
	     }
	      }
		      sum=sum1 + sum2;
	      
	      printf("%d",sum);
}


