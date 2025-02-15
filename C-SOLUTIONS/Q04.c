#include<stdio.h>
int main(){
    int h,b;
    printf("enter the height and base of triangle:");
    scanf("%i %i",&h,&b);
    float area=0.5*h*b;
    printf("area of triangle=%.2f",area);
    return 0;
}