#include <stdio.h>
int countChar(char *p) {
    int count = 0;
    for(int i = 0; *(p+i) != '\0'; i++) {
        if (*(p+i) == 'C') {
            count += 1;
        }
    }
    return count;
}
int main(void){
    // Your code here!
    char string[] = "CheeseCake";
    int num;
    num = countChar(string);
    printf("Cの数:%d", num);
    return 0;
}