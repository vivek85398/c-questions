#include<stdio.h>
int main(){
    int a,b;
    int hcf=0;
    printf("enter first and second number:");
    scanf("%i %i",&a,&b);
    if(a==b){
        hcf=a;
    }
    else if(a<b){
        for(int i=1;i<=a;i++){
            if(a%i==0&&b%i==0){
                hcf=i;
            }
        }
    }
    else{
        for(int i=1;i<=b;i++){
            if(a%i==0&&b%i==0)
            hcf=i;
        }
    }
    printf("hcf=%d",hcf);
    return 0;
}