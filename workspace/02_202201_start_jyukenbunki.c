#include <stdio.h>
int main(void){
    // Your code here!
    int a = 1;
    if (a > 0) {
        printf("条件を満たしました\n");
    } else {
        printf("条件を満たしませんでした\n");
    }

    int b = 5;
    if ( b%2 == 0) {
        printf("条件を満たしました。偶数でした。\n");
    } else {
        printf("条件を満たしませんでした。奇数でした。\n");
    }
    return 0;
}