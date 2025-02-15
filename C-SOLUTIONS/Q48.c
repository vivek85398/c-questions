#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(arr[0]);
    int k;
    printf("enter number under 10:");
    scanf("%i",&k);
    int rotated[len];
    int tracker=0;
    k=k%len;
    for(int i=len-k-1;i<len;i++){
        rotated[tracker]=arr[i];
        tracker++;
    }
    for(int i=0;i<k;i++){
        rotated[tracker]=arr[i];
        tracker++;
    }
    for(int i=0;i<len;i++){
        printf("%i ",rotated[i]);
    }
    return 0;
}