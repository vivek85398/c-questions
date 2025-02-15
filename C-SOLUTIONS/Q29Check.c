#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%i",&n);
    int flag=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;   
        }
    }
    if(flag==0){
        printf("pime number");
    }
    else{
        printf("not prime number");
    }
    return 0;
}