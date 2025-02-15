#include<stdio.h>
int main(){
    int n;
    printf("enter nth number:");
    scanf("%i",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    float avg=sum/n;
    printf("sum=%i\naverage=%.2f",sum,avg);
    return 0;
}