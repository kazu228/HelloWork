#include <stdio.h>
int countChar(char *p, char c) {
    int count = 0;
    for(int i = 0; *(p+i) != '\0'; i++) {
        if (*(p+i) == c) {
            count += 1;
        }
    }
    return count;
}
int main(void){
    // Your code here!
    char string[100];
    char moji;
    int num;
    char m;
    printf("文字列入力してください。");
    scanf("%s", string);
    printf("カウントする文字を入力してください");
    m = getchar();                              // ダミーとるため
    scanf("%c", &moji);
    num = countChar(string, moji);
    printf("%cの数:%d", moji, num);
    return 0;
}