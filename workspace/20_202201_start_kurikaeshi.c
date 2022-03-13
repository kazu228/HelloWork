#include <stdio.h>
int main(void){
    // Your code here!
    int ages[5], i;
    printf("5人の年齢を入力してください。\n");
    for (i=0; i < 5; i++) {
        scanf("%d", &ages[i]);
    }

    for (i=0;i<5;i++) {
        for (int j=0;j<ages[i];j++) {
            printf("*");
        }
        printf("\t");
        printf("%d歳", ages[i]);
        printf("\n");
    }
    return 0;
}