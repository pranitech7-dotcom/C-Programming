#include<stdio.h>
#include<conio.h>
void main()
{
    // Accept 2 no and print even no  between them 
    int i,j ,n;

    printf("\nEnter i :");
    scanf("%d",&i);

    printf("\nEnter j :");
    scanf("%d",&j);

    for(n=i;n<j;n++)
        {
            if(n%2==0){
                printf("\nEven no:%d",n);
            }

        }
}