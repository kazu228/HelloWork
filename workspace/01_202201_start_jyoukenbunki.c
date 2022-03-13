#include <stdio.h>
int main(void){
    // Your code here!
    // printf("%d\n", 2>=3);
    // printf("%d\n", 1<5);
    // printf("%d\n", 3==3);
    // printf("%d\n", 2!=4);

    printf("%d\n", 2>1 && 1<3);
    printf("%d\n", 2<1 && 1<3);
    printf("%d\n", 2<1 && 1>3);
    printf("%d\n", 2>1 || 1<3);
    printf("%d\n", 2<1 || 1<3);
    printf("%d\n", 2<1 || 1>3);
    printf("%d\n", !(2>1));
    printf("%d\n", !(2<1));
}
