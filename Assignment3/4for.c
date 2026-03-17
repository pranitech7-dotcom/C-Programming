#include<stdio.h>
#include<conio.h>
void main()
// odd no upto 1 to 20
{
    int i ;

    for (i=1;i<=20;i++)
    {
        if(i%2!=0)
        {
            printf("\n%d",i);
        }
    }
    getch();
}