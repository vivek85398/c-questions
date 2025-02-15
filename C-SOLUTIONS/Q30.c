#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%i",&n);
    int sum=0;
    while(n>0){
        int r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum of digit=%d",sum);
    return 0;
}