#include <stdio.h>
int main(void){
    // Your code here!
    int total =  0, ave = 0, count = 0, input_num;
    while (1) {
        printf("給料入力してください");
        scanf("%d", &input_num);
        if (input_num == 0) {
            break;
        }
        total += input_num;
        count++;
    }
    if (count > 0) {
        ave = (double) total / (double) count + 0.5;
    }
    printf("合計:%d  平均:%d", total, ave);
    return 0;
}
