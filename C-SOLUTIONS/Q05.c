#include<stdio.h>
int main(){
    int cel;
    printf("enter celsius:");
    scanf("%i",&cel);
    float fah=(cel*9/5)+32;
    printf("fahrenheit=%.2f",fah);
    return 0;
}