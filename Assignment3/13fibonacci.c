#include<stdio.h>

int main()
{
   int a=0,b=1,c,n;
   
   printf("Enter no of terms in fibonacci series:");
   scanf("%d",&n);

   for(int i=1;i<=n;i++)
   {
     c=a+b;
     printf("%d\n",c);
     a=b;
     b=c;
   }

   return 0 ;

}