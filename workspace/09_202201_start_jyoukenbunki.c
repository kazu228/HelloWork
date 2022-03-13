#include <stdio.h>
int main(void){
    // Your code here!
    int age;
    scanf("%d", &age);

    switch (age) {
        case 10:
            printf("二分の一成人式ですね。\n");
            break;
        case 20:
            printf("成人式ですね。\n");
            break;
        case 19:
            printf("来年、成人式ですね。\n");
            break;
        case 40:
            printf("ダブル成人式ですね。\n");
            break;
    }
    return 0;
}