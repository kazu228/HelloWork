#include <stdio.h>
int main(void){
    // Your code here!
    char c;
    int score[5], ave, point, max, min, max_soeji, min_soeji, i;
    scanf("%d %d %d %d %d", &score[0], &score[1], &score[2], &score[3], &score[4]);
    ave = ( score[0] + score[1] + score[2] + score[3] + score[4] ) / 5;

    for(i = 0; i < 5; i++) {
        point = score[i];
        if (point >= 80) {
            c = 'A';
        } else if (point >= 65) {
            c = 'B';
        } else if (point >= 40) {
            c = 'C';
        } else  {
            c = 'D';
        }
        if (i == 0) {
            printf("国語の評価は%c\n", c);
        } else if (i == 1) {
            printf("数学の評価は%c\n", c);
        } else if (i == 2) {
            printf("英語の評価は%c\n", c);
        } else if (i == 3) {
            printf("理科の評価は%c\n", c);
        } else if (i == 4) {
            printf("社会の評価は%c\n", c);
        }
    }

    max = score[0];
    max_soeji = 0;
    for (i=0;i<4;i++){
        if (max < score[i]) {
            max = score[i];
            max_soeji = i;
        }    
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
    for (i=0;i<4;i++){
        if (min > score[i]) {
            min = score[i];
            min_soeji = i;
        }
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