#include <stdio.h>
int main(void){
    // Your code here!
    char s1[4] = "LSS";
    printf("s1の中身は、%sです\n", s1);
    char s2[] = "LSS";
    unsigned long s2Num = sizeof(s2) / sizeof(s2[0]);
    printf("s2の要素数は%luです\n", s2Num);
    char ms1[] = "アカデミー";
    printf("ms1の要素数は%luです\n", sizeof(ms1) / sizeof(ms1[0]));

    int id[] = {123, 156, 234, 310, 344, 350};
    unsigned long idNum = sizeof(id) / sizeof(id[0]);
    printf("idの要素数は%luです\n", idNum);
    return 0;
}
