#include <stdio.h>
void judge(int x, int y) {
    if (x == y) {
        printf("二つは同じ\n");
    } else if (x > y) {
        printf("a1の方が大きい\n");
    } else {
        printf("a2の方が大きい\n");
    }
}
int main(void){
    // Your code here!
    int a1, a2;
    scanf("%d", &a1);
    scanf("%d", &a2);
    judge(a1, a2);

    return 0;
}