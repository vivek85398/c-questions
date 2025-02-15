#include<stdio.h>
int main(){
    int n;
    printf("enter nth number:");
    scanf("%i",&n);
    int even_sum=0;
    int odd_sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            even_sum=even_sum+i;
        }
        else{
            odd_sum=odd_sum+i;
        }
    }
    printf("even_sum=%i \n odd_sum=%i",even_sum,odd_sum);
    return 0;
}
























