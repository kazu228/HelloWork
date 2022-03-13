#include <stdio.h>
int main(void){
    // Your code here!
    int i = 1000;
    while (i > 0){
        /* code */
        printf("%d\n", i);
        if (i == 555) {
            break;
        }
        i--;
    }
    
    return 0;
}
