#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter nth number:");
    scanf("%i",&n);
    int pre=0;
    int sum=0;
    for(int i=0;i<n;i++){
        pre=pow(10,i)+pre;
        sum=sum+pre;
    }
    printf("sum of series=%i",sum);
    return 0;
}