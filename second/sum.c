#include<stdio.h>

int sum(int n);

int main()
{

printf("%d",sum(4));
    return 0;
}


//recursive function
int sum(int n){
    if (n==1)
    {
        return 1;
    }

    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;

}