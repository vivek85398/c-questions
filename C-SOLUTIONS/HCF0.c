#include<stdio.h>
int main(){
    int a,b;
    printf("enter first and second number:");
    scanf("%i %i",&a,&b);
    int hcf=1;
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    printf("hcf=%i",hcf);
    return 0;
}