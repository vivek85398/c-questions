#include<stdio.h>
int main(){
    int s,e;
    printf("enter starting and end number:");
    scanf("%i %i",&s,&e);
    printf("total prime number:");
    for(int i=s;i<=e;i++){
        int flag=0;
        for(int j=2;j<i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
        printf("%d\t",i);
    }
    }
    return 0;
}