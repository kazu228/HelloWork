#include <stdio.h>
int main(void){
    // Your code here!
    int price = 1000;
    if ( price > 500) {
        printf("500円より高い\n");
        if (price > 800) {
            printf("800円より高い\n");
        } else {
            printf("500円より高いけど800円以下です\n");
        }
    } else if (price >= 100) {
        printf("500円以下ですが100円以上です\n");
    } else {
        printf("100円未満です\n");
    }
    return 0;
}
