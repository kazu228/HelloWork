#include <stdio.h>
int main(void){
    // Your code here!
    FILE *fpIn;
    char infile[] = "/Users/lss-guest/Desktop/out.txt";
    char wkStr[256];

    fpIn = fopen(infile, "r");
    if (fpIn == NULL) {
        printf("ファイルのオープンに失敗しました。\n");
        return 9;
    } 
    while(1) {
        if (fgets(wkStr, 256, fpIn) == NULL) {
            printf("読み込み終了\n");
            break;
        } else {
            printf("%s\n", wkStr);
        }
    }
    fclose(fpIn);
    return 0;    
}