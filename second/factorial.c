#include<stdio.h>

int factorial(int n);

int main()
{

printf("factorial of %d \n",factorial(4));
    return 0;
}


//recursive function
int factorial(int n){
    if (n==0)
    {
        return 1;
    }

    int factNm1 = factorial(n-1);
    int factN = factNm1 * n;
    return factN;

}
