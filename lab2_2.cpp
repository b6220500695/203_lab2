#include<stdio.h>
int main()
{
	float time=0,a=199.00,b=299.00,f=0;
	int mod,i;
	char p;
	scanf("%c",&p);
	scanf("%f",&time);
	if(p=='A')
	{
        if(time>200)
		 {   
		    mod = time*100;
            mod = mod%100;
            f = mod;
            f = (f/60)*3;
            i =time; 
            a=(a+(3*(i-200)))+f;
            printf("%.2f",a);
        }
        else
        {
            printf("%.2f",a);
        }
    }
    if(p=='B')
    {
        if(time>400)
        {
            mod = time*100;
            mod = mod%100;
            f = mod;
            i =time;
            f = (f/60)*2;

            b=(b+(2*(i-400)))+f;
            printf("%.2f",b);
        }
        else
        {
            printf("%.2f",b);
        }
    }
    return 0;
}
            

