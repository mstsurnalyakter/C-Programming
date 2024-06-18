#include<stdio.h>

int main()
{
    printf("%d \n",3<4 && 6<2);
    printf("%d \n",3<4 || 6<2);
    printf("%d \n",!(3<4 && 6<2));
    return 0;
}