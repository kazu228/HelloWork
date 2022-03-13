#include <stdio.h>
int main(void){
    // Your code here!
    double total = 0.0;
    double weight;

    while (1){
        printf("小数値で体重を入力してください\n");
        scanf("%lf", &weight);
        if (weight == 0) {
            break;
        } else {
            total += weight;
        }
    }
    printf("体重の合計は%lfkgです\n", total);
    return 0;
}