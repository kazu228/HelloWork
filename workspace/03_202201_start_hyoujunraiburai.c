#include <stdio.h>
#include <string.h>
int main(void){
    // Your code here!
    char a[100];
    char b[100];

    strcpy(a, "abcde");
    strcpy(b, "vwxyz");

    printf("%s\n", a);
    printf("%s\n", b);

    int result = strcmp(a, b);
    if (result == 0) {
        printf("文字列a,bは等しい");
    } else if (result > 0) {
        printf("文字列aはbより大きい");
    } else {
        printf("文字列aはbより小さい");
    }
    strcat(a, b);
    int len = strlen(a);
    printf("%s %d", a, len);

    return 0;
}