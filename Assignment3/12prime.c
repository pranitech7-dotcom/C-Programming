#include<stdio.h>
#include<conio.h>
void main()
{
    // prime number upto number 
    int i,j,cnt,no,primecnt=0;

    printf("\nEnter no here:");
    scanf("%d",&no);

    for(i=1;i<=no;i++)
    {
        cnt = 0 ;

        for(j=1;j<=i;j++)
        {
                if(i%j==0)
                {
                    cnt++;
                }
        }
                if(cnt==2)
                {
                    printf("\n%d",i);
                    primecnt++ ;
                }
                
    }
    printf("\nprime count: %d",primecnt);
    getch();
}