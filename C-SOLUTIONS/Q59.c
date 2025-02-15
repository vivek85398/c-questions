#include<stdio.h>
int main(){
    char str[]="1 2 ka 4, 4 2 ka 1 my name is sheryians";
    int len=sizeof(str)/sizeof(char);
    int i=0;
    int alphabet=0;
    int digit=0;
    int special_char=0;
    while(str[i]!='\0'){
        if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122)){
            alphabet++;
        }
        else if(str[i]>=48 && str[i]<=57){
            digit++;
        }
        else if(str[i]==' '){}
        else{
            special_char++;
        }
        i++;
    }
    printf("alphabets=%i\ndigits=%i\nspecial characters=%i",alphabet,digit,special_char);
    return 0;
}