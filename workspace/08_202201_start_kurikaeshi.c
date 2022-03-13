#include <stdio.h>
int main(void){
    // Your code here!
    int money = 120, money_limit = 10000, total = 0, days = 0;
    while (1) {
        total += money;
        days ++;
        if ( total > money_limit) {
            break;
        }
    }
    printf("%d日目で貯金額が%d円になりました", days, total);
    return 0;
}
