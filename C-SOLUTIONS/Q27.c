#include<stdio.h>
int main(){
    int n,p;
    printf("enter number and it's power:");
    scanf("%i %i",&n,&p);
    int r=1;
    for(int i=1;i<=p;i++){
        r=r*n;
    }
    printf("result=%i",r);
    return 0;
}