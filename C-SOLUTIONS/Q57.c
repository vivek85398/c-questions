#include<stdio.h>
int main(){
    char str[]="levelr";
    int len=sizeof(str)/sizeof(char);
    int start=0;
    int end=len-2;
    int flag=0;
    for(int i=0;i<len-2;i++){
        if(str[start]==str[end]){
            flag=0;
            start++;
            end--;
        }
        else{
            flag=1;
        }
    }
    if(flag==0){
        printf("plindromic string");
    }
    else{
        printf("not plindromic string");
    }
    return 0;
}