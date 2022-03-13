#include<stdio.h>


int main(void){
    double hensu_a = 3.141592;
    int hensu_b = 105;
    char hensu_c = 'A';

    printf("%lf %d %c\n", hensu_a, hensu_b, hensu_c);

    char moji = 'x';
    float syohizei = 0.5;
    int kakaku = 120;

    printf("%c %.1f %d\n", moji, syohizei, kakaku);
    
    int hensu1 = 55;
    char moji1 = 'T';

    printf("%d %c\n", hensu1, moji1);

    char ch;
    int num1, num2;
    ch = 'k';
    num1 = 10;
    num2 = -5;

    printf("%c %d %d\n", ch, num1, num2);
    return 0;
}