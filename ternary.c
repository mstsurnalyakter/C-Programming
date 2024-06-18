#include<stdio.h>

int main()
{
    int age;
    int day;
    printf("Enter age =");
    scanf("%d",&age);
    age >= 18 ? printf("adult \n"): printf("not adult \n");

    printf("Enter day(0-5)");
    scanf("%d",&day);

    switch (day)
    {
    case 0:
    printf("sun \n");
        /* code */
        break;
        case 1:
         printf("tue \n");
         break;
        case 2:
         printf("wed \n");
         break;
        case 3:
         printf("thu \n");
         break;
        case 4:
         printf("fri \n");
         break;


    default:
     printf("sat \n");
        break;
    }


    return 0;
}