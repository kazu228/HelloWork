#include <stdio.h>
int main(void){
    // Your code here!
    FILE *fpOut;
    char outfile[] = "/Users/lss-guest/Desktop/out.txt";
    fpOut = fopen(outfile, "w");
    fputs("Lifeskill Academy\n2657830", fpOut);
    fclose(fpOut);
    return 0;    
}
