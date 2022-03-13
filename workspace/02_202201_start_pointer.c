#include <stdio.h>
int main(void){
    // Your code here!
    int a = 123;
    int *p = &a;

    printf("a=%d\n", a);

    printf("*p = %d\n", *p);

    *p = 456;
    printf("a = %d\n", a);
    printf("*p = %d\n", *p);

    return 0;
}
