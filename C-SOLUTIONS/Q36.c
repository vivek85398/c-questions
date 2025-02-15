#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%i",&n);
    int sum=0;
    printf("sum of factor:");
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    printf("%i\n",sum);
    if(n==sum){
        printf("perfect number");
    }
    else{
        printf("not perfect number");
    }
    return 0;
}