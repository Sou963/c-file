#include<stdio.h>
void print(void);
int main()
{
    print();
    printf("\n Here return to main function .\n\n");
    return 0;

}
void print(void)
{
    printf("This is the function part.");

}
