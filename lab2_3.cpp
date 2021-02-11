#include<stdio.h>
int main()
{
int x=3,k[x],i,j;
    char y[x];
    for ( i = 0; i < x; i++)
    {
       scanf("%d",&k[i]);
   }
   for ( i = 0; i < x; i++)
   {
       scanf(" %c",&y[i]);
   }
   i = 0;
    do
    {
    	if(i < x-1 && k[i] > k[i+1])
        {
        	j = k[i+1];
           k[i+1] = k[i];
            k[i] = j;
            i = 0;
        }
        else
        {
            i++;
        }
    }while(i < x);

    for ( i = 0; i < x; i++)
    {
        if (y[i]=='A')
        {
            printf("%d ",k[0]);
        }
        else if (y[i]=='B')
        {
            printf("%d ",k[1]);
        }
        else if (y[i]=='C')
        {
            printf("%d ",k[2]);
        }
    }
}

