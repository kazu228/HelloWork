#include <stdio.h>
int main(void){
    // Your code here!
    int year;
    printf("西暦を入力してください->");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("うるう年です");
    } else {
        printf("平年です");
    }
    return 0;    
}
