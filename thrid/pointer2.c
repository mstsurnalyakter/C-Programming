#include<stdio.h>


int main()
{
int i = 5;
int *ptr = &i;
int **pptr = &ptr;
printf("pointer ot pointer %d",**pptr);


    return 0;
}
