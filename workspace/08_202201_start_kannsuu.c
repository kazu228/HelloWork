#include <stdio.h>
double seihoukei (void) {
    double nagasa, menseki;
    printf("一辺の長さ---------->");
    scanf("%lf", &nagasa);
    menseki = nagasa * nagasa;
    return menseki;
}
double chouhoukei(void) {
    double tate, yoko, menseki;
    printf("縦の長さ---------->");
    scanf("%lf", &tate);
    printf("横の長さ---------->");
    scanf("%lf", &yoko);
    menseki = tate * yoko;
    return menseki;
}
double en(void) {
    double hankei, menseki;
    printf("半径の長さ---------->");
    scanf("%lf", &hankei);
    menseki = hankei * hankei * 3.14;
    return menseki;
}
int main(void){
    // Your code here!
    int kind;
    double result;
    printf("図形の種類(正方形=1、長方形=2、円=3)-->");
    scanf("%d", &kind);
    if (kind == 1) {
        result = seihoukei();
    } else if (kind == 2) {
        result = chouhoukei();
    } else {
        result = en();
    }
    printf("面積は%.2lfcmです", result);
    return 0;
}
