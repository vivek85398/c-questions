#include<stdio.h>
int main(){
    int n;
    printf("enter nth number:");
    scanf("%d",&n);
    int pre=0;
    int curr=1;
    printf("%i %i ",pre,curr);
    for(int i=2;i<n;i++){
        int next=pre+curr;
        pre=curr;
        curr=next;
        printf("%i ",next);
    }
    return 0;
}