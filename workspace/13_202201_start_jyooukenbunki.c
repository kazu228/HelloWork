#include <stdio.h>
int main(void){
    // Your code here!
    int chukan, kimatu;
    printf("中間試験の点数を入力してください->");
    scanf("%d", &chukan);
    printf("期末試験の点数を入力してください->");
    scanf("%d", &kimatu);

    if (chukan >= 60 && kimatu >= 60) {
        printf("合格です");
    } else if (chukan + kimatu >= 130) {
        printf("合格です");
    } else if (chukan + kimatu >= 100 && (chukan >= 90 || kimatu >= 90)) {
        printf("合格です");
    } else {
        printf("不合格");
    }
    return 0;
}