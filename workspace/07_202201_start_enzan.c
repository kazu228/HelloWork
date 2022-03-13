#include <stdio.h>
int main(void){
    // Your code here!
    int kokugo, sansu, eigo, total;
    float average;
    scanf("%d %d %d", &kokugo, &sansu, &eigo);
    total = kokugo + sansu + eigo;
    average = (float) total / 3.0;
    printf("合計%d点で、平均点は%.1f点です", total, average);
    return 0;
}
