#include <stdio.h>
int main(void){
    // Your code here!
    char chars[3];
    printf("キーボードから３個の文字を入力してください。\n");
    scanf("%c %c %c", &chars[0], &chars[1], &chars[2]);
    printf("%c %c", chars[0], chars[2]);
    return 0;
}