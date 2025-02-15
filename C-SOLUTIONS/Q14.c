#include<stdio.h>
int main(){
    int n;
    printf("enter input number:");
    scanf("%i",&n);
    if(n>0 && n%2==0){
        printf("even number");
    }
    else if(n==0){
        printf("number is zero");
    }
    else if(n<0){
        printf("negative number");
    }
    else{
        printf("odd number");
    }
    return 0;
}