#include<stdio.h>
int main(){
    int age;
    printf("enter age:");
    scanf("%i",&age);
    if(age>17){
        printf("eligible for vote");
    }
    else{
        printf("not eligible for vote");
    }
    return 0;
}