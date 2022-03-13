#include <stdio.h>
typedef struct  
{
    /* data */
    int x;
    int y;
} Dot;
typedef struct  
{
    /* data */
    Dot dt1;
    Dot dt2;
    char color[10];
} Square;
int main(void){
    // Your code here!
    Square sqr = {100, 200, 200, 350, "red"};

    Square *ps = &sqr;

    printf("%d%d%d%d%s", ps->dt1.x, ps->dt1.y, ps->dt2.x, ps->dt2.y, ps->color);
    return 0;
}
