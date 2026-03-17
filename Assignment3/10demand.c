#include<stdio.h>
#include<conio.h>
void main()
{
    // Accept and print on demand 
    char name[30];
    int i,n ;

    printf("\nEnter user name:");
    scanf("%s",name);

    printf("\nEnter no for user wants to print:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("\n%d.%s",i,name);
    }
    getch();
}