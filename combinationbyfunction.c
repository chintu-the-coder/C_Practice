// combination using function
#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=1;i<=x;i++){
    fact =fact*i;
    }
    return fact;
}
int main(){
int n,r;
    printf("enter the n:");
    scanf("%d",&n);
    printf("enter the r:");
    scanf("%d",&r);
    int ncr ;
    int nfact= factorial(n);
    int rfact=factorial(r);
    int nrfact=factorial(n-r);
    ncr = nfact/(rfact*nrfact);
    printf("%d",ncr);
    return 0;
    }