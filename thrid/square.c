#include<stdio.h>

void square(int n);
void _square(int* n);

int main()
{

int n = 4;
    square(n);
    _square(&n);
    return 0;
}


void square(int n){
    n = n*n;
printf("square of %d\n",);
}
void _square(int* n){
    *n =(*n) * (*n);
printf("square of %d\n",*n);
}