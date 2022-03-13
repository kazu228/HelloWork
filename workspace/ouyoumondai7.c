#include <stdio.h>
#include <string.h>
#include <ctype.h>

int SearchString(char t[], int ofs, char p[], int nce);

int main(void){
    char p[80], t[256];

    int ofs = 0, lenp, nce, line = 1;

    FILE *fp;

    printf("パターン文字列:");     // 検索する文字列の入力
    scanf("%s", p);
    lenp = strlen(p);            // 検索する文字列の長さ

    printf("大文字/小文字を区別しない(0:No, 1:Yes)");
    scanf("%d", &nce);          // 区別するためのデータ入力

    fp = fopen("in.txt", "r");   // ファイルオープン

    while(fgets(t, sizeof t, fp) != NULL) {    // 終端までファイルを読み込む
        ofs = 0;
        ofs = SearchString(t, ofs, p, nce);     // 何文字目まで検索したか

        while (ofs != -1) {                  // 見つからないまで繰り返し
            printf("行: %d, 文字位置: %3d\n", line, ofs+1);
            ofs = SearchString(t, ofs, p, nce);
        }
        line++;
    }
    fclose(fp);         // ファイルクローズ

    return 0;
}

int SearchString(char t[], int ofs, char p[], int nce){

    int i, j;
    char cht, chp;

    int lent = strlen(t);
    int lenp = strlen(p);

    if (lent -ofs < lenp)       // 検索文字列が対象の文字列より長いとき
        return -1;

    for (i = ofs; lent - i >= lenp; i++) {    // 
        for (j = 0; j < lenp; j++) {          // 検索文字列と一つずつ比較
            cht = nce ? toupper(t[i]) : t[i];
            chp = nce ? toupper(p[j]) : p[j];
            // if ()
                break;
        }
    }
}