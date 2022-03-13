#include <stdio.h>
int main(void){
    // Your code here!
    int num = 70;
    if (num == 100) {
        printf("100点でした\n");
    } else if (num >= 80) {
        printf("100点未満80点以上でした。\n");
    } else if (num >= 50) {
        printf("80点未満50点以上でした。\n");
    } else if (num >= 0) {
        printf("50点未満0以上でした。\n");
    } else {
        printf("点数が負の値です。\n");
    }
    return 0;
}
