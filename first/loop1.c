#include<stdio.h>
int main()
{
    printf("for loop\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Surnaly \n");
    }
    printf("while loop\n");

int j=0;
    while (j <= 5)
    {
        printf("%d \n",j);
        j++;
    }
    printf("do while loop\n");
    int k =0;

    do
    {
        printf("%d \n",k);
        k++;
    } while (k <= 10);




    return 0;
}