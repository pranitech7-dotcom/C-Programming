#include<stdio.h>
#include<conio.h>
void main()
// table for a entered number 
{
    int i,j,f ;

    printf("\nEnter no :");
    scanf("%d",&i);

    for(j=1;j<=10;j++)
    {
       printf("\n%d",i*j);
    }
    getch();
}