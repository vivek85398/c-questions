#include<stdio.h>
int main(){
    int y;
    printf("enter year:");
    scanf("%i",&y);
    if(y%400==0){
        printf("leap year\n");
    }
    else if(y%100==0){
        printf("not leap year\n");
    }
    else if(y%4==0){
        printf("leap year\n");
    }
    else{
        printf("not leap year");
    }
    return 0;
}