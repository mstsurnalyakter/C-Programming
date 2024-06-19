#include<stdio.h>



int main()
{

int age = 20;
// int age3 = 20;

int *ptr = &age;
// int *ptr2 = &age3;
// int age2 = *ptr;

printf("%p\n",&age);
printf("%p\n",ptr);
printf("%p\n",&ptr);
printf("%d\n",age);
printf("%d\n",*(&age));
printf("%d\n",*ptr);

// printf("ptr %p\n",ptr);
// printf("ptr2 %p\n",ptr2);
// printf("ptr %p\n",&ptr);
// printf("ptr2 %p\n",&ptr2);
// printf("ptr %u\n",&ptr);
// printf("ptr2 %u\n",&ptr2);


    return 0;
}
