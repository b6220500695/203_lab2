#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c,x;
	scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
 x=a+b+c;

	if (((0<=a<=30))&&(0 <= b <= 30)&&(0<=c<=40))
	{
      if(x>=80&&x<=100)
      {
		printf("A");
      }
      else if(x>=75)
      {
		printf("B+");
      }
      else if(x>=70)
      {
		printf("B");
      }
      else if(x>=65)
      {
		printf("C+");
      }
      else if(x>=60)
      {
		printf("C");
      }
      else if(x>=55)
      {
		printf("D+");
      }
      else if(x>=50)
      {
		printf("D");
      }
      else if(0<=x<=49)
      {
		printf("F");
      }
   }
}


