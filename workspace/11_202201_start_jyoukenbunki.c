#include <stdio.h>
int main(void){
    // Your code here!
    int year;
    printf("西暦を入力してください->");
    scanf("%d", &year);
    switch (year%12) {
        case 0:
            printf("さる");
            break;
        case 1:
            printf("とり");
            break;
        case 2:
            printf("いぬ");
            break;
        case 3:
            printf("いのしし");
            break;
        case 4:
            printf("ねずみ");
            break;
        case 5:
            printf("うし");
            break;
        case 6:
            printf("とら");
            break;
        case 7:
            printf("うさぎ");
            break;
        case 8:
            printf("たつ");
            break;
        case 9:
            printf("へび");
            break;
        case 10:
            printf("うま");
            break;
        case 11:
            printf("ひつじ");
            break;
    }
    printf("年です");
    return 0;    
}