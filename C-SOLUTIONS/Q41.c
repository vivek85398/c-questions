#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<len;i++){
        sum=sum+arr[i];
    }
    printf("sum of all array element=%i",sum);
    return 0;
}