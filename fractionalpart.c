#include<stdio.h>
int main ()
{
    float x;
    printf("enter the number:");
    scanf("%f",&x);
    int y;
    y = x;
    float z;
    z= x-y;
    printf("the fractional part of the number : %f",z);
    return 0;
}