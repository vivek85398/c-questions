#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first,second and number");
    scanf("%i %i %i",&a,&b,&c);
    if(a==b && b==c){
        printf("all number is equal");
    }
        else if(a>b&&a>c){
        printf("a is greater");
    }
    else if(b>a&&b>c){
        printf("b is greater");
    }
    else{
        printf("c is greater");
    }
    return 0;
}