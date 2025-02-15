#include<stdio.h>
int main(){
    int input;
    printf("enter number:");
    scanf("%i",&input);
    int copy_input=input;
    int reverse=0;
    while(input!=0){
        reverse=reverse*10;
        reverse=reverse+input%10;
        input=input/10;
    }
    if(copy_input==reverse){
        printf("plindromic number");
    }
    else{
        printf("not plindromic number");
    }
    return 0;
}