#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
    // Your code here!
    char str[] = "AbcDefGHijk1234lmNOP";

    for (int i = 0; i < strlen(str); i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }

    printf("str=%s", str);
    return 0;
}
