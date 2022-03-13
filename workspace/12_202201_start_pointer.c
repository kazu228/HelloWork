#include <stdio.h>
void trimChar(char *str) {
    char cps[100];
    int i;
    for(i = 0; *(str+i) != '\0'; i++) {
        cps[i] = *(str+i);
    }
    cps[i+1] = '\0';
    int j = 0;
    for(i = 0; cps[i] != '\0'; i++) {
        // printf("%d", cps[i] != ' ');
        if (cps[i] != ' ') {
            *(str+j) = cps[i];
            j++;
        }
    }
    *(str+j) = '\0';
    printf("%s", str);
}
int main(void){
    // Your code here!
    char moji[] = "HE     LLO    WOR    LD";
    trimChar(moji);
    return 0;
}