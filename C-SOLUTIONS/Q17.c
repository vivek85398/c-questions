#include<stdio.h>
int main(){
    int c,s;
    printf("enter cost and selling price:\n");
    scanf("%i %i",&c,&s);
    if(s>c){
        printf("profit=%i",s-c);
    }
    else if(s<c){
        printf("loss=%i",c-s);
    }
    else{
        printf("no profit");
    }
    return 0;
}