#include <stdio.h>
int main(void){
    // Your code here!
    int input_num, total;
    printf("整数値を入力＞");
    scanf("%d", &input_num);
    total = 0;
    for (int i = 1; i <= 100; i++) {
        if (i <= input_num) {
            total += i;
        }
    }
    printf("1から%dまでの合計は、%dです。",input_num, total);
    return 0;
}