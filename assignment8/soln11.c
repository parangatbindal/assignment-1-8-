#include<stdio.h>
void main()
{
      int i,x,y,n,sum=0;
	      printf("give n:");
	      scanf("%d",&n);
	      printf("give %d numbers:",n);
	      for(i=1;i<=n;i++)
	      {
		      scanf("%d",&x);
		      y=x%10;
		      if(y%3==0)      
		sum=sum+x;
	      }
              printf("%d",sum);
}	      
			

