#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int len=sizeof(arr)/sizeof(int);
    for(int i=0;i<len;i++){
        printf("%i ",arr[i]);
    }
    return 0;
}