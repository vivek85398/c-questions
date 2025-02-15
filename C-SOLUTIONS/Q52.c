#include<stdio.h>
int main(){
    char str[]="hello shery";
    int len=sizeof(str)/sizeof(str[0]);
    for(int i=len-2;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}