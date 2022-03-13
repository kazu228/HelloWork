#include <stdio.h>

int main(void){
    // Your code here!
    struct  Person {
        /* data */
        float height;
        float weight;
        int birthYear;
        int birthMonth;
        int birthDay;
    };
    struct  Person p = { 170.5, 55.5, 1980, 3, 9};
    printf("身長:%.1fcm 体重:%.1fkg 生年月日:%d年%d月%d日",p.height, p.weight, p.birthYear, p.birthMonth, p.birthDay);
    return 0;
}