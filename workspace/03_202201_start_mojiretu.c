#include <stdio.h>
#include <string.h>
int main(void){
    // Your code here!
    char str[] = "Hello World!";
    printf("%s\n", str);

    char str2[] = "This is a pen.";
    int length;
    length = sizeof(str2)-1;
    printf("%s\n", str2);
    printf("%d\n", length);

    char str3[101];
    int i;
    scanf("%s", str3);
    for(i=0; str3[i] != '\0'; i++);

    printf("%s\n", str3);
    printf("%d\n", i);


    // 問い4
    char str4[101];
    char moji;
    printf("文字列を入力>");
    scanf("%s", str4);
    for(i=0;str4[i]!='\0';i++) {
        if( str4[i] == '_' ) {
            printf(" ");
        } else {
            printf("%c", str4[i]);
        }
    }
    printf("\n");
    // 問い5
    char str5[101];
    printf("文字列を入力>");
    scanf("%s", str5);
    for(i=0;str5[i]!='\0';i++) {
        printf("%c\n", str5[i]);
    }

    // 問い6
    char str6[101];
    char str7[101];
    char tmp[101];
    int flag = 0;
    printf("一つ目の文字列を入力＞");
    scanf("%s", str6);
    printf("二つ目の文字列を入力＞");
    scanf("%s", str7);
    // 文字数が違うと等しくない
    if (sizeof(str6) != sizeof(str7)) {
        printf("等しくない\n");
    } else {
        for(i=0;str6[i] != '\0'; i++) {
            if (str6[i] != str7[i]) {
                printf("等しくない\n");
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("等しい\n");
        }
    }
    // 問い7
    char str8[10];
    int j;
    int flag2 = 0;
    printf("10進数(9桁以内):");
    scanf("%s", str8);
    for(i=0;str8[i]!='\0';i++) {
        if (i == 0) {
            if (str8[i] == '+' || str8[i] == '-' || (str8[i] >= '0' && str8[i] <= '9')) {
                flag2 = 0;   // ok
            } else {
                flag2 = 1;  // ng
                break;
            }
        } else {
            if(str8[i] >= '0' && str8[i] <= '9') {
                flag2 = 0;
            }
        }
    }
    if (flag2 == 0) {
        printf("整数\n");
    } else {
        printf("整数ではない\n");
    }
    return 0;
}
