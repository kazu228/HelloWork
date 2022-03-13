#include <stdio.h>
int main(void){
    // Your code here!
    int strike_count = 0, ball_count = 0, input_num;
    while (1){
        printf("ストライク=1 or ボール=2 ?");
        scanf("%d", &input_num);
        if (input_num == 1) {
            strike_count += 1;
        } else {
            ball_count += 1;
        }
        if (strike_count == 3 || ball_count == 4) {
            break;
        }
    }
    printf("%dストライク,%dボール", strike_count, ball_count);
   return 0; 
}