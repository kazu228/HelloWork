#include <stdio.h>
int main(void){
    // Your code here!
    int c;
    c = getchar();
    putchar(c);
    char str[256];
    while (1) {
        if (gets(str) == NULL) {
            break;
        }
        puts(str);
    }
    return 0;
}
