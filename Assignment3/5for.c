#include<stdio.h>
#include<conio.h>
void main()
// no div by 3 and 5 upto 20
{
    int i ;

    for (i=1;i<=20;i++)
    {
        if(i%3==0  && i%5==0)
        {
            printf("\nno divisible by 3 and 5:%d",i);
            break ;
        }       
    }
    getch();
}