#include<stdio.h>
int main(){
    int a,b;
    printf("enter first and second number:");
    scanf("%d %d",&a,&b);
    fflush(stdin);
    char operator;
    printf("enter operator:");
    scanf("%c",&operator);
    if(operator=='+'){
        printf("%d",a+b);
    }
    else if(operator=='-'){
        printf("%d",a-b);
    }
    else if(operator=='*'){
        printf("%d",a*b);
    }
    else if(operator=='/'){
        printf("%d",a/b);
    }
    return 0;
}