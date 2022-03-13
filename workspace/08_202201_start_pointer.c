#include <stdio.h>
void reverseChar(char *str) {
    int i;
    char s[100];
    for(i=0;*(str+i)!='\0';i++){   // 文字数をカウント
        s[i] = *(str+i);
    }
    s[i] = '\0';
    i -= 1;
    while (i >= 0) {
        *str = s[i];
        i--;
        str++;
    }
    *str = '\0';
}
int main(void){
    // Your code here!
    char str1[100] = "HELLO";
    reverseChar(str1);
    printf("結果:%s", str1);
    return 0;
}
