// combination without using function
#include<stdio.h>
int main(){
    int n,r,i;
    printf("enter the n:");
    scanf("%d",&n);
    printf("enter the r:");
    scanf("%d",&r);
    int ncr ;
    int nfact=1;
    int rfact=1;
    int nrfact=1;
    for(i=1;i<=n;i++){
        nfact=nfact*i;
    }
    for(i=1;i<=r;i++){
        rfact=rfact*i;
    }
    for(i=1;i<=n-r;i++){
        nrfact=nrfact*i;
    }
    ncr = nfact/(rfact*nrfact);
    printf("%d",ncr);

    
    return 0;
}