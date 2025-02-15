#include<stdio.h>
int main(){
    int km;
    printf("enter kmph:");
    scanf("%i",&km);
    float mph=(km)*0.621371;
    printf("miles per hour=%.2f",mph);
    return 0;
}