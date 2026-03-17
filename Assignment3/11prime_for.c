#include<stdio.h>

int main()
{
    int no, i;

    printf("Enter number:\n");
    scanf("%d", &no);

    if(no <= 1)
    {
        printf("Given number is Not Prime");
        return 0;
    }

    for(i = 2; i <= no / 2; i++)
    {
        if(no % i == 0)
        {
            printf("Given number is Not Prime");
            return 0 ;
        }
    }

    printf("Given number is Prime");

    return 0;
}
