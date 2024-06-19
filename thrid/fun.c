#include<stdio.h>

void doWord(int a,int b,int *sum,int *prod,int *avr);

int main()
{
    int a = 3, b=2;
    int sum,prod,avr;

    doWord(a,b,&sum,&prod,&avr);
    printf("sum = %d, prod = %d, avr = %d\n",sum,prod,avr);


    return 0;
}


void doWord(int a,int b,int *sum,int *prod,int *avr){
     *sum = a + b;
    *prod = a * b;
   *avr = (a+b)/2;

}
