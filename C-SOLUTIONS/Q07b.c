#include<stdio.h>
int main(){
    int min;
    printf("enter minutes:");
    scanf("%i",&min);
    int h=min/60;
    int minute=min%60;
    printf("total hours=%i\ntotal minutes=%i",h,minute);
    return 0;
}