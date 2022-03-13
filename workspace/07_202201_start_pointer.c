#include <stdio.h>
void addChar(char *str, char *str2){
    // helloの終端までループ
    while (*str != '\0') {
        str++;
    }
    while (*str2 != '\0') {
        *str = *str2;
        str++;
        str2++;
    }
    //　終端文字をいれる
    *str = '\0';

}
int main(void){
    // Your code here!
    char str1[100] = "Hello";
    char str2[] = "World";

    addChar(str1, str2);

    printf("結果は%sです\n", str1);
    return 0;
}