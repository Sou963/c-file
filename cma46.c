#include<stdio.h>
main()
{
    int n,row,col;
    scanf("%d",&n);
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d",row);


        }
        printf("\n");
    }
}
