#include <stdio.h>
int main(void){
    // Your code here!
    char c;
    int score[5], ave, point, max, min, max_soeji, min_soeji;
    scanf("%d %d %d %d %d", &score[0], &score[1], &score[2], &score[3], &score[4]);
    ave = ( score[0] + score[1] + score[2] + score[3] + score[4] ) / 5;

    //  国語
    point = score[0];
    if (point >= 80) {
        c = 'A';
    } else if (point >= 65) {
        c = 'B';
    } else if (point >= 40) {
        c = 'C';
    } else  {
        c = 'D';
    }
    printf("国語の評価は%c\n", c);

    //  数学
    point = score[1];
    if (point >= 80) {
        c = 'A';
    } else if (point >= 65) {
        c = 'B';
    } else if (point >= 40) {
        c = 'C';
    } else  {
        c = 'D';
    }
    printf("数学の評価は%c\n", c);

    //  英語
    point = score[2];
    if (point >= 80) {
        c = 'A';
    } else if (point >= 65) {
        c = 'B';
    } else if (point >= 40) {
        c = 'C';
    } else  {
        c = 'D';
    }
    printf("英語の評価は%c\n", c);

    //  理科
    point = score[3];
    if (point >= 80) {
        c = 'A';
    } else if (point >= 65) {
        c = 'B';
    } else if (point >= 40) {
        c = 'C';
    } else  {
        c = 'D';
    }
    printf("理科の評価は%c\n", c);

    //  社会
    point = score[4];
    if (point >= 80) {
        c = 'A';
    } else if (point >= 65) {
        c = 'B';
    } else if (point >= 40) {
        c = 'C';
    } else  {
        c = 'D';
    }
    printf("社会の評価は%c\n", c);

    max = score[0];
    max_soeji = 0;
    if (max < score[1]) {
        max = score[1];
        max_soeji = 1;
    } 
    if (max < score[2]) {
        max = score[2];
        max_soeji = 2;
    }
    if (max < score[3]) {
        max = score[3];
        max_soeji = 3;
    }
    if (max < score[4]) {
        max = score[4];
        max_soeji = 4;
    }
    if (max_soeji == 0) {
        printf("最高得点:%d教科名国語", max);
    } else if (max_soeji == 1) {
        printf("最高得点:%d教科名数学", max);
    } else if (max_soeji == 2) {
        printf("最高得点:%d教科名英語", max);
    } else if (max_soeji == 3) {
        printf("最高得点:%d教科名理科", max);
    } else if (max_soeji == 4) {
        printf("最高得点:%d教科名社会", max);
    }
    printf("\n");
    min = score[0];
    min_soeji = 0;
    if (min > score[1]) {
        min = score[1];
        min_soeji = 1;
    } 
    if (min > score[2]) {
        min = score[2];
        min_soeji = 2;
    }
    if (min > score[3]) {
        min = score[3];
        min_soeji = 3;
    }
    if (min > score[4]) {
        min = score[4];
        min_soeji = 4;
    }
    if (min_soeji == 0) {
        printf("最低得点:%d教科名国語", min);
    } else if (min_soeji == 1) {
        printf("最低得点:%d教科名数学", min);
    } else if (min_soeji == 2) {
        printf("最低得点:%d教科名英語", min);
    } else if (min_soeji == 3) {
        printf("最低得点:%d教科名理科", min);
    } else if (min_soeji == 4) {
        printf("最低得点:%d教科名社会", min);
    }
    return 0;
}