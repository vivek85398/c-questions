#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int len=sizeof(arr)/sizeof(int);
    for(int i=len-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}