#include <stdio.h>
int y = 2;
int calc(int x){
    y++;
    printf("1%d", y);
    return y * x;
}
int main(void){
    // Your code here!
    int x, z;
    int y = 5;
    scanf("%d", &x);
    y += x;
    z = calc(y);
    printf("%d", z);
    return 0;
}