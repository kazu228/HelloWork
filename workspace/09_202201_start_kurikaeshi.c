#include <stdio.h>
int main(void){
    // Your code here!
    int age;
    while (1) {
        /* code */
        printf("年齢を入力してください。");
        scanf("%d", &age);
        if (age == 0) {
            break;
        }
        if ( age < 0 || 100 < age) {
            printf("エラーメッセージ");
        } else if ( age >= 20) {
            printf("成年");
        } else {
            printf("未成年");
        }
        printf("\n");
    }
    
    return 0;
}
