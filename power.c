#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    int power = pow(a,b);
    printf("the power is %d",power);

    return 0;
}