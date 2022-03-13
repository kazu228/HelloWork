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

    int width;
    int height;

    width = sqr.dt2.x - sqr.dt1.x;
    height = sqr.dt2.y - sqr.dt1.y;

    printf("%d%d%d%d%s", sqr.dt1.x, sqr.dt1.y, sqr.dt2.x, sqr.dt2.y, sqr.color);
    printf("%d%d%d", width, height, width * height);
    return 0;
}
