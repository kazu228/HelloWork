#include<stdio.h>


int main(void){
    // 1
    int total;
    total = 20;

    // 2
    float average;
    average = 85.5;

    // 3
    total = 45;

    // 4
    printf("%d\n", total);

    // 5
    printf("%.1f\n", average);

    // 6
    char level = 'A';

    // 7
    printf("%c\n", level);

    // 8
    double pi = 3.14159265;

    // 9
    long big_number = 5500000000;

    // 10
    printf("%.8lf %ld\n", pi, big_number);
    
    return 0;
}