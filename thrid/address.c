#include<stdio.h>

void printAddress(int n);
void printAddress2(int *n);

int main()
{
    int n = 7;

    printAddress(n);
    printf("address %d\n",&n);
    printAddress2(&n);
    printf("address %d\n",&n);


    return 0;
}

void printAddress(int n){
    printf("print address %d\n",&n);
}
void printAddress2(int *n){
    printf("print address %d\n",n);
}
