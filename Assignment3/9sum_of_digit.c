#include<stdio.h>
#include<conio.h>
void main()
{
    // sum of digits 
    int no,rem,sum=0;

    printf("\nEnter no :");
    scanf("%d",&no);

    for(;no!=0;no=no/10)
    {
        rem = no%10 ;
        sum = sum +rem;
    }
    printf("\nSum of number : %d",sum);
    
    getch();
}