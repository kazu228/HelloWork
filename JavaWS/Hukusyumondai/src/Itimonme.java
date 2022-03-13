import java.util.Scanner;

public class Itimonme {
    // 復習問題１
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        // 1
        // 1
        System.out.println("Lifeskill Academy");

        // 2
        int x = 11;
        System.out.println("x=" + x);

        // 3
        x = 13;
        int y = 17;
        System.out.println("x=" + x);
        System.out.println("y=" + y);

        // 4
        x = x + y;
        System.out.println(x);

        // 5
        x = 7;
        System.out.println(x);
        x *= 3;
        System.out.println(x);
        x /= 2;
        System.out.println(x);

        // 2
        // 1
        System.out.println("問い1str入力");
        Scanner scn = new Scanner(System.in);
        String str = scn.next();
        System.out.println(str);
        // 2
        System.out.println("問い２");
        System.out.println("xの入力");
        str = scn.next();
        x = Integer.parseInt(str);
        System.out.println(x);
        // 3
        System.out.println("問い3");
        System.out.println("xの入力");
        str = scn.next();
        x = Integer.parseInt(str);
        System.out.println("yの入力");
        str = scn.next();
        y = Integer.parseInt(str);
        System.out.println("和:" + (x + y));
        System.out.println("差:" + (x - y));
        System.out.println("積:" + (x * y));
        System.out.println("商:" + (x / y));
        System.out.println("余り:" + (x % y));
        
        scn.close();
    }
}
