#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);

    for (int i = 10; i >=1; i--)
    {
        printf("Table of %d\n",i*n);
    }

    return 0;

}