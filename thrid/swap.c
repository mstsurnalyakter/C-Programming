#include<stdio.h>

void swap1(int a,int b);
void swap2(int *a,int *b);



int main()
{
    int x = 2, y=3;

    // swap1(x,y);
    swap1(x,y);
    printf("x = %d & y = %d\n",x,y);
    swap2(&x,&y);
    printf("x = %d & y = %d\n",x,y);

    return 0;
}


//call by value
void swap1(int a,int b){
    int t = a;
     a= b;
    b = t;

    printf("a = %d & b = %d\n",a,b);

}
//call by reference
void swap2(int *a,int *b){
    int t = *a;
     *a= *b;
    *b = t;

    printf("a = %d & b = %d\n",*a,*b);

}
