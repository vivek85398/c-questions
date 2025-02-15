#include<stdio.h>
int main(){
    int arr[]={12,45,23,58,44,62,89,69,52,98,77};
    int len=sizeof(arr)/sizeof(int);
    int large;
    for(int i=0;i<len;i++){
        if(arr[i]<arr[i+1]){
            large=arr[i+1];
        }
    }
    printf("largest number in array=%i",large);
    return 0;
}