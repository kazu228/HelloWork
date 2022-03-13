public class Mojiretu {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        // 1
        String str1 = "ライフスキル";
        // 2
        System.out.printf("%s\n", str1);
        //  3
        str1 += "アカデミー";
        System.out.printf("%s\n", str1);
        // 4
        String str2 = str1.substring(0, 6);
        String str3 = str1.substring(6, 11);

        String str4 = str2 + " " + str3;
        System.out.printf("%s\n", str4);
        // 5
        System.out.printf("%d\n", str4.length());
        // 6
        str2 = "2016";
        // 7
        str2 += "0702";
        // 8
        if (str1.equals(str2)) {
            System.out.printf("同じ\n");
        } else {
            System.out.printf("違う\n");
        }

        // 9
        str3 = str1 + str2;
        System.out.printf("%s\n", str3.substring(1, 5));

        if (str3.indexOf("アカ") >= 0) {
            System.out.printf("含まれている\n");
        } else {
            System.out.printf("含まれていない\n");
        }
        // StringBuilderの練習問題
        // 1
        StringBuilder sb1 = new StringBuilder("今日は");
        System.out.printf("%s\n", sb1);
        // 2
        System.out.printf("%s\n", sb1.append("天気いいですね。"));
        // 3
        System.out.printf("%s\n", sb1.replace(5, 7, "悪い"));
        // 4
        StringBuilder sb2 = new StringBuilder("運動会なのに");
        System.out.printf("%s\n", sb2);
        // 5
        StringBuilder sb3 = new StringBuilder(sb2.append(sb1));
        System.out.printf("%s\n", sb3);
        // 6
        System.out.printf("%s\n", sb3.delete(6, 9));
        // 7
        System.out.printf("%s\n", sb3.length());
        // 8
        System.out.printf("%s\n", sb3.append("中止になりそうです。"));
    }
}
