#include <stdio.h>
void dispWa(int x) {
    printf("総和=%d\n", x);
    return;
}

int main(void){
    // Your code here!
    int wa = 0;
    for (int i = 0; i <= 100; i++) {
        wa = wa + i;
        dispWa(wa);
    }
    return 0;
}
