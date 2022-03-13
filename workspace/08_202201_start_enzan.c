#include <stdio.h>
int main(void){
    // Your code here!
    int tate, yoko, menseki;
    float chokei, menseki2;
    scanf("%d", &tate);
    scanf("%d", &yoko);
    menseki = tate * yoko;
    printf("たて%d、よこが%dの四角形の面積は%dです\n", tate, yoko, menseki);
    printf("円の直径を入力してください\n");
    scanf("%f", &chokei);
    menseki2 = chokei/2 * chokei/2 * 3.14;
    printf("直径が%.0fの円の面積は,%fです", chokei, menseki2);
}
