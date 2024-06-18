#include<stdio.h>
//declaration/prototype
void printHello();
//prototype/declaration
void myName();
//prototype/declaration
void university();

int main()
{

printHello();//function call
printHello();//function call
printHello();//function call
myName();
university();

    return 0;
}
//function definition
void printHello(){
    printf("Hello World\n");
}

//definition
void myName(){
    printf("Mst Surnaly Akter.\n");
}

void university(){
    printf("Daffodil International University");
}