#include<stdio.h>
int main(){
    int h,minute;
    printf("enter hour and minutes:");
    scanf("%i %i",&h,&minute);
    int min=h*60;
    printf("total minutes=%i",min+minute);
    return 0;
}