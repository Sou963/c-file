#include<stdio.h>
main()
{
    int n,col,row;
    printf("n=");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ",col);
        }
       for(col=1;col<=2*row-1;col++)
       {
           printf("#");
           
       }
       printf("\n");
    }
    return 0;
}
