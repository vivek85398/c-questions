#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%i",&n);
    int copy=n;
    int sum=0;
    while(n!=0){
        int r=n%10;
        int cube=pow(r,3);
        sum=sum+cube;
        n/=10;
    }
    printf("sum of cube of digit=%i\n",sum);
    if(copy==sum){
        printf("it is armstrong number");
    }
    else{
        printf("not armstrong number");
    }
    return 0;
}