#include <stdio.h>
int main(void){
    // Your code here!
    char c;
    printf("a-eまでの文字を入力してください->");
    scanf("%c", &c);

    if (c == 'a') {
        printf("apple");
    } else if ( c == 'b') {
        printf("beach");
    } else if ( c == 'c') {
        printf("cheese");
    } else if (c == 'd') {
        printf("desert");
    } else if (c == 'e') {
        printf("enjoy");
    } else {
        printf("other");
    }
    return 0;
}
