#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%i",&n);
    int sum=0;
    int copy=n;
    while(n>0){
        int r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(copy%sum==0){
        printf("harshad number");
    }
    else{
        printf("not harshad");
    }
    return 0;
}