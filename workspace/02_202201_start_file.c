#include <stdio.h>
int main(void){
    // Your code here!
    FILE *fpOut;
    char outfile[] = "/Users/lss-guest/Desktop/out2.txt";
    fpOut = fopen(outfile, "w");
    char name[] = "Lifeskill Academy\n";
    long telNo = 2657830;
    fprintf(fpOut, "%s\n%ld", name, telNo);
    fclose(fpOut);
    return 0;    
}