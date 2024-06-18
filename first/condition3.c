#include<stdio.h>

int main()
{
    int mark;
    printf("Enter mark(0-100) = ");
    scanf("%d",&mark);
    if (mark > 30)
    {
        /* code */
        printf("Pass \n");
    }else
    {
        printf("Fail \n");
    }

    mark > 30 ? printf("You are pass \n"):printf("Your are fail \n");


    if (mark < 30)
    {
        printf("C \n");
    }else if (mark >= 70 && mark > 90)
    {
        printf("A \n");
    }else if (mark >= 90 && mark <=100)
    {
        printf("A+ \n");
    }





    return 0;
}