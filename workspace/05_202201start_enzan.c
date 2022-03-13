#include <stdio.h>
int main(void){
    // Your code here!
    char name;
    printf("あなたの名前のイニシャルを入力してください\n");
    name = getchar();
    printf("こんにちは、%cさん!\n", name);

    int month, day;
    printf("あなたの誕生日はいつですか?\n");
    scanf("%d", &month);
    scanf("%d", &day);
    printf("%d月%d日なんですね。\n", month, day);

    float foot;
    printf("足のサイズを聞いてもいいですか？\n");
    scanf("%f", &foot);
    printf("%.1fcmなんですね。", foot);
    return 0;
}