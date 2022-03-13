#include <stdio.h>
typedef struct {
    /* data */
    int x;
    int y;
    int r;
    char color[10];
} Round;

int main(void){
    // Your code here!
    Round rnd1;
    Round rnd2[1];

    printf("rnd1の大きさ=%luバイト\n", sizeof(rnd1));

    printf("rnd1のアドレス=%p\n", &rnd1);

    printf("%p %p %p %p\n", &rnd1.x, &rnd1.y, &rnd1.r, rnd1.color);

    printf("rnd2の大きさ=%luバイト\n", sizeof(rnd2));

    printf("rnd2[0]のアドレス=%p\n", &rnd2);

    printf("%p %p %p %p\n", &rnd2[0].x, &rnd2[0].y, &rnd2[0].r, rnd2[0].color);

    return 0;
}
