#include <stdio.h>
int main(void){
    // Your code here!
    char str[2][4] = {"ABC", "DEF"};

    printf("1.%p\n", &str[0][0]);
    printf("2.%p\n", &str[0][1]);
    printf("3.%p\n", &str[0][2]);
    printf("4.%p\n", &str[0][3]);
    printf("5.%p\n", &str[1][0]);
    printf("6.%p\n", &str[1][1]);
    printf("7.%p\n", &str[1][2]);
    printf("8.%p\n", &str[1][3]);
    printf("9.%p\n", str[0]);
    printf("10.%p\n", str[1]);
    printf("11.%p\n", str);
    return 0;
}
