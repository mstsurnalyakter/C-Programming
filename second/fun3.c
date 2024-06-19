#include<stdio.h>

void printGoodBye();
void printWelcome();

int main()
{
char ch;
printf("Enter g for GoodBye and W for Welcome: ");
scanf("%c",&ch);

if (ch == 'g' || ch == 'G')
{
    printGoodBye();
}else if (ch == 'W' || ch == 'w')
{
    printWelcome();
}



    return 0;
}

void printGoodBye(){
    printf("Good Bye");
}

void printWelcome(){
    printf("Welcome");
}