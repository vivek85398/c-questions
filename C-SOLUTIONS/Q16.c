#include<stdio.h>
int main(){
    int m,s,e,h;
    printf("enter marks of math,science,englishand hindi:");
    scanf("%i %i %i %i",&m,&s,&e,&h);
    float per=(m+s+e+h)/4;
    printf("total percent=%.2f\n",per);
    if(per<35){
        printf("fail");
    }
    else if(per<45){
        printf("grade is d");
    }
    else if(per<55){
        printf("grade is c");
    }
    else if(per<75){
        printf("grade is b");
    }
    else{
        printf("grade is a");
    }
    return 0;
}