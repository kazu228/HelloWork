#include <stdio.h>
int main(void){
    // Your code here!
    int num[4];
    num[0] = 1;
    num[1] = 2;
    num[2] = 3;
    num[3] = 4;
    printf("配列の0番目の中身は%dです\n", num[0]);
    printf("配列の1番目の中身は%dです\n", num[1]);
    printf("配列の2番目の中身は%dです\n", num[2]);
    printf("配列の3番目の中身は%dです\n", num[3]);

    int num2[] = {1, 2, 3, 4};
    printf("配列の0番目の中身は%dです\n", num2[0]);
    printf("配列の1番目の中身は%dです\n", num2[1]);
    printf("配列の2番目の中身は%dです\n", num2[2]);
    printf("配列の3番目の中身は%dです\n", num2[3]);

    int num3[3][4] = {{1, 2, 3, 4}, {11, 12, 13, 14}, {21, 22, 23, 24}};
    printf("配列の中身は%dです\n", num3[0][0]);
    printf("配列の中身は%dです\n", num3[1][2]);
    printf("配列の中身は%dです\n", num3[2][1]); 
    return 0;
}
