#include<stdio.h>
int add(int a , int b){
    return a+b;
}
int main(){
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:"); 
    scanf("%d",&b);
    int sum = add(a,b);
    printf("%d",sum);
    return 0;
}