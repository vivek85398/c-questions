#include<stdio.h>
int main(){
    int a,b;
    printf("first and second number:");
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("lcm=%d",a);
    }
    else if(a<b){
        int mult=0;
        for(;;){
            mult=mult+a;
            if(mult%a==0 && mult%b==0){
                printf("lcm=%d",mult);
                break;
            }
        }
    }
    else if(b<a){
        int mult=0;
        for(;;){
            mult=mult+b;
            if(mult%b==0 && mult%a==0){
                printf("lcm=%d",mult);
                break;
            }
        }
    }
    return 0;
}