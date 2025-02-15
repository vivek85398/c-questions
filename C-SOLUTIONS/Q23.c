#include<stdio.h>
int main(){
    int n;
    printf("enter nth number:");
    scanf("%i",&n);
    for(int i=1;i<=n;i++){
        printf("%i ",i);
    }
    return 0;
}