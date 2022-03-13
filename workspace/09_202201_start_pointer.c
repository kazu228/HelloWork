#include <stdio.h>
#include <string.h>
void erase_tail(char *str, int n) {
    int len;
    for(len=0;*(str+len) != '\0'; len++);
    if (len > n) {
        *(str + len -n) = '\0';
    } else {
        *str = '\0';
    }
}
int main(void){
    // Your code here!
    int i;        // 文字数
    char moji[100];
    printf("文字列入力->");
    scanf("%s", moji);
    printf("削除する文字数->");
    scanf("%d", &i);
    erase_tail(moji, i);
    printf("結果:%s", moji);
    return 0;
}
