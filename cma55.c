#include<stdio.h>
main()
{
    int n,col,row;
    printf("n=");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(col==row||col+row==n+1)
            {
                printf("#");

            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");

    }
    return 0;
}