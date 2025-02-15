#include<stdio.h>
int main(){
    int p,i,t;
    printf("enter principal,interest and time:");
    scanf("%i %i %i",&p,&i,&t);
    float si=(p*i*t)/100;
    printf("simple interest=%.2f",si);
    return 0;
}