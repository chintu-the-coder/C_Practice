#include<stdio.h>
int main ()
{  
    int x;
    printf("enter the number :");
    scanf("%d",&x);
    if(x<0){
        x=x*(-1);
        printf("the absolute value of x is : %d",x);
    }
    else {
         printf("the absolute value of x is : %d",x);
    }

    return 0;
}