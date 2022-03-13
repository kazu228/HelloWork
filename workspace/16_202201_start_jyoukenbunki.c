#include <stdio.h>
int main(void){
    // Your code here!
    float kyuyuryou, waribiki;
    int gasorindai, seikyugaku;
    int tanka = 141;

    printf("給油量を入力してください->");
    scanf("%f", &kyuyuryou);
    gasorindai = kyuyuryou * tanka;
    if (kyuyuryou <= 20) {
        waribiki = 0;
    } else {
        waribiki = (kyuyuryou - 20.0) * (float) tanka * 0.1;
    }
    seikyugaku = gasorindai - waribiki;
    printf("ガソリン代:%d円 割引額:%f円 請求額:%d円", gasorindai, waribiki, seikyugaku);
    return 0;
}
