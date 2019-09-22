#include<stdio.h>
void main()
{
      int i,x,n,c=0,sum=0,j,a;
              printf("give n:");
              scanf("%d",&n);
              printf("give %d numbers:",n);
              for(i=1;i<=n;i++)
              {
                      scanf("%d",&x);
		      if(x%2==0)
		      {
			      a=x;
			      c++;
		      }
		      if(c>=1)
		      {
			      for(j=i;j<=n;j++)
			      sum+sum+a;
		      }
	      }
	      printf("%d",sum);
}


		     
