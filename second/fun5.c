#include<stdio.h>
int multiply(int a,int b);

int main()
{

    int a,b;

    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter first number = ");
    scanf("%d",&b);

int m = multiply(a,b);
printf("Multiply of %d",m);
    return 0;
}

int multiply(int a,int b){
    return a * b;
}