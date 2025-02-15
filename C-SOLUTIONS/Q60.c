#include<stdio.h>
int main(){
    char str1[]="abcde";
    char str2[]="pqrst";
    int len1=sizeof(str1)/sizeof(str1[0]);
    int len2=sizeof(str2)/sizeof(str2[0]);
    char str3[len1+len2-1];
    int tracker=0;
    for(int i=0;i<len1+len2-1;i+=2){
        str3[i]=str1[tracker];
        tracker++;
    }
    tracker=0;
    for(int i=1;i<len1+len2-1;i+=2){
        str3[i]=str2[tracker];
        tracker++;
    }
    str3[len1+len2-1]='\0';
    printf("%s",str3);
    return 0;
}