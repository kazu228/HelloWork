#include <stdio.h>
int max3(int x, int y, int z) {
    int result = 0;
    int i;
    result = x;
    if (result < y) {
        result = y;
    }
    if (result < z) {
        result = z;
    }
    return result;
}
int min3(int x, int y, int z) {
    int result = 0;
    int i;
    result = x;
    if (result > y) {
        result = y;
    }
    if (result > z) {
        result = z;
    }
    return result;
}
int main(void){
    // Your code here!
    int a, b, c, max, min;
    printf("1個目の数値\n");
    scanf("%d", &a);
    printf("2個目の数値\n");
    scanf("%d", &b);
    printf("3個目の数値\n");
    scanf("%d", &c);
    max = max3(a, b, c);
    min = min3(a, b, c);
    printf("最大値は%dです\n", max);
    printf("最小値は%dです\n", min);
    return 0;
}
