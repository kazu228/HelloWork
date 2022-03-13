#include <stdio.h>
int main(void){
    // Your code here!
    // (1)
    int *ptr1;
    // (2)
    int *ptr2;
    int x;
    ptr2 = &x;
    // (3)
    char *ptr3;
    char moji[] = "abc";
    ptr3 = moji;
    // (4)    printf("%s\n", ptr3); の方もあり
    for (int i = 0; *(ptr3 + i) != '\0'; i++) {
        printf("%c", *(ptr3 + i));
    }
    printf("\n");
    // (5)  
    char *ptr5;
    char moji2[] = "def";
    ptr5 = moji2;
    for (int i = 0; *(ptr5 + i) != '\0'; i++) {
        printf("%x", *(ptr5 + i));
    }
    printf("\n");

    //  (6)
    printf("%c", *(ptr5 + 1));
    printf("\n");

    // (7)
    int *ptr7;
    ptr7 = &x;
    *ptr7 = 111;
    printf("%d", x);
    printf("\n");
    //  (8)
    char *ptr8;
    char moji3[] = "aaa111";
    int i = 0;
    ptr8 = moji3;
    while (*(ptr8 + i) != '\0')
    {
        printf("%c", *(ptr8+i));
        i++;
    }
    printf("\n");
    // (9)
    char vc[5] = "aaaa";     // なんでもいい?
    for (i = 0; vc[i] != '\0'; i++) {
        printf("%p\n", &vc[i]);
    }
    // (10)
    int vi[5] = {1, 2, 3, 4, 5};    // なんでもいい?
    for (i = 0; vi[i] != '\0'; i++ ) {
        printf("%p\n", &vi[i]);
    }
    // (11)
    char *pC0 = &vc[0];
    char *pC1 = &vc[1];

    printf("pCo=%p\n", pC0);
    printf("pC1=%p\n", pC1);
    printf("pC1-pC0=%p\n", pC1-pC0);  // 要素数の差がでる(バイトではない)
    // (12)
    int *pI0 = &vi[0];
    int *pI1 = &vi[1];

    printf("pIo=%p\n", pI0);
    printf("pI1=%p\n", pI1);          // 要素数の差がでる(バイトではない)
    printf("pI1-pI0=%p\n", pI1-pI0);

    return 0;
}
