#include<stdio.h>
int main()
{
int n,sum=0;

printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 0, j=n; i <= n , j>=1; i++,j--)
    {
        sum+=i;
        printf("%d \n",j);
    }

    printf("sum of %d",sum);
    return 0;

}