#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
   
    char ch;

    for(i=1;i<=4;i++)
    {
        ch='a';
        for(j=1;j<=i;j++,ch++)
        {
            printf("%c",ch);
        }
       printf("\n");
    }
    getch();    
}