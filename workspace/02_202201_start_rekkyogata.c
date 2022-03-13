#include <stdio.h>
#include <string.h>
enum Week {
    SUN,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
};
int main(void){
    // Your code here!
    char str[100];
    enum Week num;
    scanf("%d", &num);
    switch(num)
    {
        case SUN:
            strcpy(str, "日曜日");
            break;
        case MON:
            strcpy(str, "月曜日");
            break;
        case TUE:
            strcpy(str, "火曜日");
            break;
        case WED:
            strcpy(str, "水曜日");
            break;
        case THU:
            strcpy(str, "木曜日");
            break;
        case FRI:
            strcpy(str, "金曜日");
            break;
        case SAT:
            strcpy(str, "土曜日");
            break;
    }
    printf("%sです", str);
    return 0;
}
