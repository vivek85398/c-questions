#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows for the inverted right triangle:");
    scanf("%i",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}