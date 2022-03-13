#include <stdio.h>
#include <string.h>
int main(void){
    // Your code here!
    char str[] = "Lifeskill Academy";
    printf("%lu\n", strlen(str));

    char str2[30] = "";
    strcpy(str2, str);
    printf("%s\n", str2);

    char str3[5] = "";
    strncpy(str3, str, 3);
    printf("%s\n", str3);

    strcat(str2, str3);
    printf("%s\n", str2);
    strncat(str2, str3, 2);
    printf("%s\n", str2);

    char str4[] = "1234";
    char str5[] = "1235";
    int result = strcmp(str4, str5);
    if (result == 0) {
        printf("二つの文字列は等しい\n");
    } else if (result > 0) {
        printf("str4の方が大きい\n");
    } else {
        printf("str5の方が大きい\n");
    }
    result = strncmp(str4, str5, 3);
    if (result == 0) {
        printf("二つの文字列は等しい\n");
    } else if (result > 0) {
        printf("str4の方が大きい\n");
    } else {
        printf("str5の方が大きい\n");
    }
    char *sp;
    sp = strstr(str, "Aca");
    if (sp == NULL) {
        printf("みつかりませんでした\n");
    } else {
        printf("見つかりました。アドレス=%p\n", sp);
    }
    return 0;
}
