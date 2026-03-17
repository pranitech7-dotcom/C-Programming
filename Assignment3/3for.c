#include<stdio.h>
#include<conio.h>
// even numbers upto 1 to 20
void main()
{
    int i ;

    for (i=1;i<=20;i++)
    {
        if(i%2==0)
        {
            printf("\n%d",i);
        }
    }
    getch();
}