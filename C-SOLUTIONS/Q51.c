#include<stdio.h>
int main(){
    char str[]="hello shery";
    int len=sizeof(str)/sizeof(str[0]);
    int i=0;
    while(str[i]>'\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}