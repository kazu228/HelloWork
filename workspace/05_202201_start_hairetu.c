#include <stdio.h>
int main(void){
    // Your code here!
    float shincyo[4], ave;
    scanf("%f %f %f %f", &shincyo[0], &shincyo[1], &shincyo[2], &shincyo[3]);
    ave = (shincyo[0] + shincyo[1] + shincyo[2] + shincyo[3]) / 4.0;
    printf("平均身長:%.1f", ave); 
    return 0;
}
