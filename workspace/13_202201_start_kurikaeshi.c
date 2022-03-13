#include <stdio.h>
int main(void){
    // Your code here!
    int num[10];
    int i, number;
    for (i=0; i< 10; i++) {
        scanf("%d", &num[i]);
    }
    printf("偶数:");
    for(i=0;i<10; i++) {
        number = num[i];
        if (number % 2 == 0) {
            printf("%d\t", number);
        }
    }
    printf("\n");
    printf("奇数:");
    for(i=0;i<10; i++) {
        number = num[i];
        if (number % 2 == 1) {
            printf("%d\t", number);
        }
    }
    return 0;
}
