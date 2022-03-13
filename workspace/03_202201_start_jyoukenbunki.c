#include <stdio.h>
int main(void){
    // Your code here!
    int num;
    printf("整数値を入力してください。\n");
    scanf("%d", &num);

    if (num >= 100) {
        printf("入力値%dは100以上でした\n", num);
    }

    if (num % 2 == 0 && num % 3 == 0) {
        printf("入力値%dは２と３の公倍数です\n", num);
    }
    return 0;
}
