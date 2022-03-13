#include <stdio.h>
int main(void){
    // Your code here!
    float shincyo, taijyu;
    int bmi;
    printf("身長（cm）と体重(kg)を順に入力してください\n");
    scanf("%f", &shincyo);
    scanf("%f", &taijyu);
    bmi = taijyu / (shincyo / 100 * shincyo / 100) + 0.5;
    printf("身長%fセンチ体重%fキロのあなたのBMIは%dです。\n", shincyo, taijyu, bmi);
    printf("あなたの身長の標準体重は%.1fキロです。\n", 22*(shincyo / 100) * (shincyo / 100)+0.05);

    if (bmi < 18.5) {
        printf("痩せ気味\n");
    } else if (bmi >= 18.5 && bmi < 25) {     // bmi < 25 だけでもいい
        printf("標準\n");
    } else {
        printf("肥満\n");
    }
    return 0;
}
