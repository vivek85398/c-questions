#include<stdio.h>
int main(){
    char str1[]="hello ji kaise ho";
    char str2[]="sheryians badhiya hai";

    int len1=sizeof(str1)/sizeof(char);
    int len2=sizeof(str2)/sizeof(char);

    char str3[len1+len2];
    for(int i=0;i<len1-1;i++){
        str3[i]=str1[i];
    }
    str3[len1-1]=' ';
    for(int i=0;i<len2-1;i++){
        str3[len1+i]=str2[i];
    }
    str3[len1+len2]='\0';
    printf("%s",str3);
    return 0;
}