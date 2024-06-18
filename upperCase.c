#include<stdio.h>

int main()
{
    char letter;

    printf("Enter a letter = ");
    scanf("%c",&letter);

    if (letter >= 'A' && letter <= 'Z')
    {
        printf("Upper case. \n");
    }else if (letter >= 'a' && letter <= 'z')
    {
        printf("Lower case. \n");
    }else
    {
            printf("Not valid letter. \n");
    }

    return 0;
}