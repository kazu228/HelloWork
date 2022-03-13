#include <stdio.h>
int main(void){
    // Your code here!
    int age;
    scanf("%d", &age);
    
    if (age >= 18) {
        printf("運転免許取れますね\n");
        if (age == 20) {
            printf("成人式ですね。\n");
        }
        if (age >= 20) {
            printf("飲酒できますね\n");
        }
    } else {
        printf("免許とれないし、飲酒もできませんね\n");
    }

    return 0;    
}
