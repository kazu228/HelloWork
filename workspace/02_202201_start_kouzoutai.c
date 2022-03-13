#include <stdio.h>
struct  Member{
        /* data */
        int no;
        int koku;
        int suga;
        int rika;
        int sya;
        float avg;
        char eval;
    };
struct Member stu[5] = {{1001, 85, 74, 63, 90, 0.0, ' '},
                        {1002, 78, 65, 70, 62, 0.0, ' '},
                        {1003, 89, 92, 88, 76, 0.0, ' '},
                        {1004, 32, 48, 66, 25, 0.0, ' '},
                        {1005, 92, 76, 81, 98, 0.0, ' '}};
int setAverage(void) {
    for(int i=0;i < 5;i++) {
        stu[i].avg = (stu[i].koku + stu[i].suga + stu[i].rika + stu[i].sya) / 4.0;

    }
    return 0;
}
int setEvaluation(void) {
    for(int i=0; i < 5; i++) {
        if (stu[i].avg >= 80) {
            stu[i].eval = 'A';
        } else if (stu[i].avg >= 70) {
            stu[i].eval = 'B';
        } else if (stu[i].avg >= 60) {
            stu[i].eval = 'C';
        } else {
            stu[i].eval = 'D';
        }
    }
    return 0;
}
int main(void){
    // Your code here!
    
    setAverage();
    setEvaluation();
    printf("生徒番号\t国語\t数学\t理科\t社会\t平均\t評価\n");
    for(int i=0; i < 5; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%.2f\t%c", 
        stu[i].no, stu[i].koku, stu[i].suga, stu[i].rika, stu[i].sya, stu[i].avg, stu[i].eval);
        printf("\n");
    }
    return 0;
}
