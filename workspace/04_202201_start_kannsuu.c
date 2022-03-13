#include <stdio.h>
int calc(int x) {
    int y = 2;
    printf("1:%d\n", y);
    y *= x;
    printf("2:%d\n", y);
    return y;
}
int main(void){
    // Your code here!
    int x, z;
    int y = 2;
    printf("3:%d\n", y);
    scanf("%d", &x);
    z = calc(x);
    printf("4:%d\n", y);
    return 0;
}
