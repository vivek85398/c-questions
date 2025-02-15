#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(int);
    int found;
    printf("enter any number of under 10:");
    scanf("%d",&found);
    int index=-1;
    for(int i=0;i<len;i++){
        if(found==arr[i]){
            index=i;
        }
    }
    printf("%d is found at %d index",found,index);
    return 0;
}