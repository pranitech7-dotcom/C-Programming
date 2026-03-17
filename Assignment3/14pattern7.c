#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,no ;
   
    char ch= 'a';

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++,ch++)
        {
            printf("%c",ch);
        }
       printf("\n");
    }
    getch();
}