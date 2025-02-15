#include<stdio.h>
int main(){
    char str[]="ha bhoola mai jahaan main masti mein ghumu ,mai karta dua ke hasti rahe tu";
    int occ[150];
    for(int i=0;i<150;i++){
        occ[i]=0;
    }
    int i=0;
    while(str[i]!='\0'){
        occ[str[i]]++;
        i++;
    }
    int largest_index=0;
    for(int i=1;i<150;i++){
        if(occ[i] > occ[largest_index] && i!=32){
            largest_index=i;
        }
    }
    printf("%c is the maximum occuring character",largest_index);
    return 0;
}
