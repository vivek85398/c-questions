#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(arr[0]);
    int find;
    printf("enter number under 10:");
    scanf("%i",&find);
    int start=0;
    int end=len-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(find==arr[mid]){
            printf("index is %d",mid);
            break;
        }
        else if(find>arr[mid]){
            start=mid+1;
            mid=(start+end)/2;
        }
        else{
            end=mid-1;
            mid=(start+end)/2;
        }
    }
    return 0;
}