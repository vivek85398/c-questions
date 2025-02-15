#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,4,3,2,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=len-1;
    int flag=0;
    for(int i=0;i<len;i++){
        if(arr[start]==arr[end]){
            start++;
            end--;
        }
    }
    if(flag==0){
        printf("palindromic array");
    }
    else{
        printf("not palindromic number");
    }
    return 0;
}