public class Mojiretsu {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        // Stringクラスのメソッドの勉強
        String str = "Hello";
        System.out.printf("strの長さ=%d\n", str.length());

        if (str.equals("Hellooo")) {
            System.out.printf("Helloと同じ\n");
        } else {
            System.out.printf("Helloと異なる\n");
        }

        String s = "World!";
        System.out.printf("%s\n", str + s);

        System.out.printf("%s\n", str.substring(1, 3));

        if (str.startsWith("he")) {
            System.out.printf("heで始まる");
        } else {
            System.out.printf("heで始まらない");
        }
        System.out.printf("\n");
        if (str.endsWith("oo")) {
            System.out.printf("ooで終わる");
        } else {
            System.out.printf("ooで終わらない");
        }
        System.out.printf("\n");

        if (str.indexOf("llooo") >= 0) {
            System.out.printf("含まれる\n");
        } else {
            System.out.printf("含まれない\n");
        }
        // ストリングビルダー
        // 文字列の結合
        StringBuilder sb = new StringBuilder("Hello !!!");
        System.out.printf("%s\n", sb.append("World"));
        // System.out.printf("%s\n", sb);
        // 文字列の挿入
        System.out.printf("%s\n", sb.insert(9, "!!!"));
        // 文字列の削除
        System.out.printf("%s\n", sb.delete(5,12));
        // 文字列の置換
        System.out.printf("%s\n", sb.replace(5, 10, "!!!"));
    }
}
