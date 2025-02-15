#include<stdio.h>
int main(){
    int a,b;
    printf("enter a and b number:");
    scanf("%i %i",&a,&b);
    int c=a;
    a=b;
    b=c;
    printf("a=%i\nb=%i",a,b);
    return 0;
}