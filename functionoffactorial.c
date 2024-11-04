// function of factorial
#include<stdio.h>
int factorial (int x){
    int fact = 1;
    for(int i=1;i<=x;i++){
    fact = fact*i;
    }
    return fact;
}
int main(){
    int n,a;
    printf("enter the number:");
    scanf("%d",&n);
    a = factorial(n);
    printf("%d",a);
    return 0;
}