#include <stdio.h>
int main(void){
    // Your code here!
    char s[] = "Lifeskill Academy";
    char *p = s;
    for (int i = 0; *(p+i) != '\0'; i++) {
        printf("%c ", *(p+i));
    }

    int num[] = {1, 2, 3, 4, 5};
    int *p1 = num;
    unsigned long idNum = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < idNum; i++) {
        printf("%d ", *p1++);
    }
    return 0;
}
