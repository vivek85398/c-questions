#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(int);
    int copy=arr[len-1];
    for(int i=len-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=copy;
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}