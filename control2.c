#include<stdio.h>
int main()
{
    int age;
    printf("Enter age = ");
    scanf("%d",&age);
    if (age >= 18)
    {
        /* code */
        printf("You are adult. \n");
    }else if (age > 13 && age <18)
    {
        /* code */
        printf("Teenager \n");
    }else
    {
        /* code */
        printf("Child \n");
    }

printf("Thank you. \n");


    return 0;
}