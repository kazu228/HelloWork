#include <stdio.h>
int main(void){
    // Your code here!
    int hour;
    printf("何時（２４時間）？");
    scanf("%d", &hour);
    if (hour < 12 && hour > 0) {
        printf("午前%d時です", hour);
    } else if (hour < 24 && hour >0) {
        hour = hour - 12;
        printf("午後%d時です", hour);
    } else if( hour < 0 || hour >= 24){
        printf("不正な数です");
    }
    return 0;
}
