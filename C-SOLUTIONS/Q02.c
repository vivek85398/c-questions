#include<stdio.h>
int main(){
    int h,w;
    printf("enter height and width:");
    scanf("%i %i",&h,&w);
    int peri=2*(h+w);
    printf("perimeter of rectangle=%i",peri);
    return 0;
}