#include <stdio.h>
int main(void){
    // Your code here!
    int result;
    float price;
    printf("商品の価格を入力してください。（税率８％）");
    scanf("%f", &price);
    result = price * 1.08 + 0.5;
    printf("消費税込み%d円です", result);
}
