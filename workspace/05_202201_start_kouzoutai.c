#include <stdio.h>

typedef struct  
{
    /* data */
    int x;
    int y;
    int r;
    char color[10];
} Round;

int main(void){
    // Your code here!
    int i;
    Round rnd1 = {100, 200, 30, "red"};
    Round rnd2[2] = {{200, 300, 60, "yellow"}, {150, 250, 20, "green"}};
    Round rnd3[2] = {{120, 150, 10, "pink"}, {220, 150, 25, "black"}};

    Round *pr1;
    Round *pr2;
    Round *pr3;

    pr1 = &rnd1;
    pr2 = rnd2;
    pr3 = rnd3;

    printf("%d%d%d%s\n", pr1->x, pr1->y, pr1->r, pr1->color);

    for(i=0;i<2;i++) {
        printf("%d%d%d%s\n",(pr2+i)->x, (pr2+i)->y, (pr2+i)->r, (pr2+i)->color);
    }

    for (i=0;i<2;i++) {
        printf("%d%d%d%s\n", pr3->x, pr3->y, pr3->r, pr3->color);
        pr3++;
    }
    return 0;
}