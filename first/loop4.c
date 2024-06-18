#include<stdio.h>

int main()
{

int n;
printf("Enter a number: ");
scanf("%d",&n);
int i=n;
int sum =0;
do
{
    sum+=i;
    printf("%d\n",i);
    i--;
} while (i >=0);

printf("Sum of %d\n",sum);

    return 0;
}