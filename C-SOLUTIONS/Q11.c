#include<stdio.h>
int main(){
    int a,b;
    printf("enter first and second number:");
    scanf("%i %i",&a,&b);
    if(a==b){
        printf("number is equal");
    }
    else{
        printf("not equal");
    }
    return 0;
}