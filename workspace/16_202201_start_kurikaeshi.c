#include <stdio.h>
int main(void){
    // Your code here!
    int a[4] = {4, 5, 2, 3};
    for (int i=0; i<4; i++) {
        for (int j = 0; j < a[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}