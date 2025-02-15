#include<stdio.h>
int main(){
    int arr[]={23,14,56,25,65,79,45,89,33,95};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int j=0;j<len-1;j++){
        for(int i=0;i<len-1-j;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    for(int i=0;i<len-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}    