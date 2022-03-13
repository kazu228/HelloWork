#include <stdio.h>
int main(void){
    // Your code here!
    int temp;
    printf("気温を整数で入力してください。\n");
    scanf("%d", &temp);

    if (temp >= 25) {
        printf("夏");
    } else if ( temp < 10) {
        printf("冬");
    } else {
        printf("春か秋");
    }
    return 0;    
}
