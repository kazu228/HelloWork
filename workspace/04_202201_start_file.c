#include <stdio.h>
int main(void){
    // Your code here!
    FILE *fpIn;
    char infile[] = "/Users/lss-guest/Desktop/in.txt";
    float height;
    fpIn = fopen(infile, "r");
    if (fpIn == NULL) {
        printf("ファイルのオープンに失敗しました。");
        return 9;
    }
    while (fscanf(fpIn, "%f", &height) != EOF) {
        printf("%f \n", height);
    }
    fclose(fpIn);
    return 0;    
}
