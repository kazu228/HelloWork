#include <stdio.h>
void calc_b(int x, int y) {
    int b;
    b = x * y;
    printf("bの値は%dです\n", b);
    return ;
}
int main(void){
    // Your code here!
    int a,b;
    a = 20;
    for (int i = 0; i < 10; i++) {
        calc_b(a, i);
    }
    return 0;
}
