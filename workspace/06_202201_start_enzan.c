#include <stdio.h>
int main(void){
    
    int i, j;
    scanf("%d %d", &i, &j);
    printf("i=%dj=%dの時、\n", i, j);
    printf("i+j=%d i-j=%d i*j=%d i/j=%d i%%j=%d", i+j, i-j, i*j, i/j, i%j);
    return 0;   
}
