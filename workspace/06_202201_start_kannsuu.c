#include <stdio.h>
int getSalePrice(int x){
    int result;
    result = (float) x * 0.8 + 0.5;
    return result;
}
int main(void){
    // Your code here!
    int price = 0;
    scanf("%d", &price);
    int salePrice = getSalePrice(price);
    printf("%d円を二割引きした販売価格は%d円です\n", price, salePrice);
    return 0;
}
