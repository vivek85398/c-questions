#include<stdio.h>
int main(){
    int h;
    printf("enter height in centimeter:");
    scanf("%d",&h);
    if(h<150){
        printf("dwarf\n");
    }
    else if(h>150 && h<200){
        printf("average\n");
    }
    else if(h>=200){
        printf("tall\n");
    }
    return 0;
}
