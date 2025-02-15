#include<stdio.h>
int main(){
    int n;
    printf("enter nth number:");
    scanf("%i",&n);
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            printf("%i+",i);
            sum=sum+i;
        }
    }
    printf("%i=%i",n,sum+n);
    return 0;
}