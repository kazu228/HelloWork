#include <stdio.h>
int main(void){
    // Your code here!
    int a = 3;
    switch (a%3){
        case 0:
            printf("変数aは3で割り切れます\n");
            // break;
        case 1:
            printf("変数aは３で割ると１余ります\n");
            // break;
        default:
            printf("それ以外の場合でした\n");
            // break;
    }
}
