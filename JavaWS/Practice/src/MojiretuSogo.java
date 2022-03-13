public class MojiretuSogo {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        // 1
        // インスタンス生成
        StringBuilder strHello = new StringBuilder();
        // 変数初期化
        String str = "Hello ";
        int strlen;                // 文字数格納変数
        // 100文字をこえるまでstrを連結
        while (true) {
            strlen = strHello.length();
            if ( strlen > 100) {
                break;
            }
            strHello.append(str);
        }
        // 結果表示
        System.out.printf("%s\n", strHello);        
        System.out.printf("%d\n", strlen);
        
        // 2
        // 変数宣言
        String strl = "ll";
        String stre = "ee";
        int indexofStart;

        while (true) {
            indexofStart = strHello.indexOf(strl);
            if (indexofStart >= 0) {
                // ll 含まれる
                strHello.replace(indexofStart, indexofStart+stre.length(), stre);
            } else {
                // ll 含まれない
                break;
            }
        }
        System.out.printf("%s\n", strHello);    


    }
}
