#include<stdio.h>
#include<string.h>
int main(){
    char str1[50];
    printf("enter first sentences of word:");
    scanf("%s",str1);
    char str2[50];
    printf("enter second sentences of word:");
    scanf("%s",str2);
    if(strcmp(str1,str2)==0){
        printf("identical\n");
    }
    else{
        printf("not identical");
    }
    return 0;
}