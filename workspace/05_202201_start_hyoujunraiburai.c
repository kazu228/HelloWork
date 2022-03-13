#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    // Your code here!
    int i;
    int j;
    int num;
    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        num = rand() % 81;
        for (j = 0; j < num; j++) {
            printf("*");
        }
        printf("\n");
    }
}
