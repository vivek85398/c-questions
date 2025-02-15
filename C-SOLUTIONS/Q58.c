#include<stdio.h>
int main(){
    char str[]="s h o o r v e e r";
    int len=sizeof(str)/sizeof(char);
    int count=0;
    for(int i=0;i<len-2;i++){
        if(str[i]==' '){
            for(int j=i;j<len-i;j++){
                str[j]=str[j+1];
            }
            count++;
        }
    }
    printf("spaces=%i\n%s",count,str);
    return 0;
}