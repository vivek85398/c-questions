#include<stdio.h>
int main(){
    int a,b;
    printf("enter a and b number:");
    scanf("%i %i",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%i\nb=%i",a,b);
    return 0;
}