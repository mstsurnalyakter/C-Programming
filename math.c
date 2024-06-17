#include<stdio.h>
#include<math.h>

int main(){
    int a = 4*3/6*2;
    int n1=5*2-2*3;//4
    int n2=5*2/2*3;//15
    int n3=5*(2/2)*3;//15
    int n4=5+2/2*3;//8
    printf("n1 = %d \n",n1);
    printf("n2 = %d \n",n2);
    printf("n3 = %d \n",n3);
    printf("n4 = %d \n",n4);

    printf("a = %d",a);

    int x;
    printf("Enter a number=");
    scanf("%d",&x);

    printf("%d", x%2==0);


    return 0;
}