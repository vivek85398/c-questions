#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%i",&n);
    int copy=n;
    int sum=0;
    while(n>0){
        int fact=1;
        int r=n%10;
        for(int i=1;i<=r;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    printf("sum of factorial of digit=%i\n",sum);
    if(copy==sum){
        printf("it is strong number");
    }
    else{
        printf("not strong number");
    }
    return 0;
}