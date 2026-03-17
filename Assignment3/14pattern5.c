#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j ;
   
    char ch= 'a';

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
        }
        ch++ ;
       printf("\n");
    }
    getch();
}