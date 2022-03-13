#include <stdio.h>
int main(void){
    // Your code here!
    int i = 0, a = 0;
    while (i < 10 ) {
        if ( a % 2 == 0) {
            a += 1;
            i++;
            continue;
        }
        if (a > 10) {
            break;
        }
        a += 3;
        printf("a=%d\n", a);
    }
    return 0;
}