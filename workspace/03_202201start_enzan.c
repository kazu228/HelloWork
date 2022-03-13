#include<stdio.h>


int main(void){

    int num1 = (float) 10 / 4;
    int num2 = 10 / 4;
    float num3 = (float) 10 / (float) 4;
    printf("変数num1 = %d\n", num1);
    printf("変数num2 = %d\n", num2);
    printf("変数num3 = %f\n", num3);
    
    num3 = 1.5;
    num1 = (int)num3 * 2;
    num2 = num3 * 2;
    printf("1.5x2はキャストありでは%dになりますが、\n", num1);
    printf("キャストなしでは%dになります\n", num2);
    return 0;
}