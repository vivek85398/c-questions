#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows for inverted right angle:");
    scanf("%i",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}