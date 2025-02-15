#include<stdio.h>
int main(){
    int arr[]={4,7,8,-5,-9,3};
    int len=sizeof(arr)/sizeof(int);
    printf("positive number:");
    for(int i=0;i<len;i++){
        if(arr[i]>0){
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
    printf("negative number:");
    for(int i=0;i<len;i++){
        if(arr[i]<0){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}