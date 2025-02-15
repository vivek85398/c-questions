#include<stdio.h>
int main(){
    int r;
    printf("enter radius of circle:");
    scanf("%i",&r);
    float peri=2*3.14*r;
    printf("perimeter of circle=%.2f",peri);
    return 0;
}