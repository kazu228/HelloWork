#include <stdio.h>
int main(void){
    // Your code here!
    int strike_count = 0, ball_count = 0, fale_count = 0, input_num;
    while (1){
        printf("ストライク=1 or ボール=2 ? or ファール=3");
        scanf("%d", &input_num);
        if (input_num == 1 || (input_num == 3 && strike_count < 2)) {
            strike_count += 1;
        } else if (input_num == 2) {
            ball_count += 1;
        }
        if (strike_count == 3 || ball_count == 4) {
            break;
        }
    }
    printf("%dストライク,%dボール", strike_count, ball_count);
   return 0; 
}