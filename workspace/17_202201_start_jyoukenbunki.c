#include <stdio.h>
int main(void){
    // Your code here!
    int sun, syaku;
    float cm, tmp;
    printf("何センチメートル？");
    scanf("%f", &cm);
    syaku = cm / 30.3;
    tmp = cm - (syaku * 30.3);
    sun = tmp / 3.03;
    if (syaku == 0) {
        printf("%.1fセンチメートルは、%d寸です", cm, sun);
    } else {
        if (sun == 0) {
            printf("%.1fセンチメートルは、%d尺です", cm, syaku);
        } else {
            printf("%.1fセンチメートルは、%d尺%d寸です", cm, syaku, sun);
        }
    }
    return 0;
}
