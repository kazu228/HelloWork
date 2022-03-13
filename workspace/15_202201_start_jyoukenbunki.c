#include <stdio.h>
int main(void){
    // Your code here!
    int count, orange_price, coffee_price, kind, price;
    count = 0;
    orange_price = 260;
    coffee_price = 230;

    printf("飲み物を選んでください（オレンジジュース:１、コーヒー:2):");
    scanf("%d", &kind);
    if (kind == 1) {
        price = orange_price;
        printf("オレンジジュースですね。何個いりますか？:");
        scanf("%d",&count);
        printf("%d円です", price * count);
    } else if (kind == 2 ){
        price = coffee_price;
        printf("コーヒーですね。何個いりますか？:");
        scanf("%d",&count);
        printf("%d円です", price * count);
    } else {
        printf("番号に誤りがあります");
    }
    return 0;
}
