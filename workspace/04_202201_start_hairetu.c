#include <stdio.h>
int main(void){
    // Your code here!
    int nums[3], max_num;
    printf("数字を三つ入力してください\n");
    scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);
    max_num = nums[0];
    if (max_num < nums[1]) {
        max_num = nums[1];
    }
    if (max_num < nums[2]) {
        max_num = nums[2];
    }

    printf("最大値:%d", max_num);
    return 0;
}