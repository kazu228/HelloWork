#include <stdio.h>
int main(void){
    // Your code here!
    float data[5] = {8.5, 10.0, 12.3, 5.0, 4.2};
    float total, ave, heihouwa;
    total = data[0] + data[1] + data[2] + data[3] + data[4];
    ave = total / 5.0;
    heihouwa = data[0] * data[0] + data[1] * data[1] + data[2] * data[2] + data[3] * data[3] + data[4] * data[4];
    printf("合計=%.1f 平均=%.1f 平方和=%.2f", total, ave, heihouwa);
    return 0;
}
