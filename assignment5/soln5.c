#include<stdio.h>
int main()
{
        int x,y;
        for(y=0;y<6;y++) 
        {
                   for(x=0;x<30;x++)

                {
                        if((y%2==1)&&((x%3==0)||(x%5==0)))
           
                        {
                                printf("*");
                        }

                        else
                        {

                                printf("0");
                        }
                }
                printf("\n");


                                }
                                }


