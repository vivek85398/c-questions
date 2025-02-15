#include<stdio.h>
int main(){
    int d,f;
    printf("enter distance and fuel consumed:");
    scanf("%i %i",&d,&f);
    float ave=d/f;
    printf("average=%.2f",ave);
    return 0;
}