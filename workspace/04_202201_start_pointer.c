#include <stdio.h>
void makeValueHalf(double x) {
    x /= 2;
}
int main(void){
    // Your code here!
    double num;
    printf("値の入力->");
    scanf("%lf", &num);
    printf("入力値=%lf\n", num);
    makeValueHalf(num);
    printf("関数実行後=%lf\n", num);
    return 0;
}
