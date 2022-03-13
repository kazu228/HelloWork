import java.util.Scanner;

public class Itimonme2 {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        // 復習問題１、分岐以降
        // 3
        // 1
        Scanner scn = new Scanner(System.in);
        System.out.println("x>>>");
        String str = scn.next();
        int x = Integer.parseInt(str);
        System.out.println("y>>>");
        str = scn.next();
        int y = Integer.parseInt(str);
        if (x > y) {
            System.out.println("xはyより大きい。");
        }
        // 2
        str = scn.next();
        int num = Integer.parseInt(str);
        if (num % 2 == 0) {
            System.out.println("偶数です。");
        } else {
            System.out.println("奇数です。");
        }
        // 3
        str = scn.next();
        int score = Integer.parseInt(str);
        if (score > 100 || 0 > score)  {
            System.out.println("点数は０〜１００の数値で入力してください。");
        } else if (score >= 80) {
            System.out.println("たいへんよくできました。");
        } else if ( score >= 60) {
            System.out.println("よくできました。");
        } else {
            System.out.println("ざんねんでした。");
        }
        scn.close();
    }
}
