#include<stdio.h>
#include<conio.h>
void main()
{
    // Reversed of entered number 
    int no,rev=0,rem;

    printf("\nEnter no :");
    scanf("%d",&no);

    for(;no!=0;no=no/10)
    {
        rem = no%10;
        rev  =rev*10+ rem;
    } 
    printf("\nreversed no :%d",rev);
    getch();
}