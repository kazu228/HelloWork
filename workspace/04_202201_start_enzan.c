#include<stdio.h>


int main(void){
    int num;
    printf("整数値を入力してください。\n");
    scanf("%d", &num);
    printf("入力された値は%dでした\n", num);

    float num2;
    printf("少数を入力してください\n");
    scanf("%f", &num2);
    printf("入力された値は%fでした\n", num2);

    char dummy = getchar();

    char moji;
    printf("文字を入力してください\n");
    moji = getchar();
    printf("入力された文字は%cでした\n", moji);

    int ip1, ip2, ip3;
    printf("整数値を３つ入力してください。\n");
    scanf("%d %d %d", &ip1, &ip2, &ip3);
    printf("ip1=%d ip2=%d ip3=%d\n", ip1, ip2, ip3);
    
    return 0;
}