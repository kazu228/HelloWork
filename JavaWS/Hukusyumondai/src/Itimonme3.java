

public class Itimonme3 {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        // 復習問題１、繰り返し
        // 4
        // 1
        int i;
        int j;
        for (i = 1; i < 10; i++) {        // 9にした方がいい
            for (j = 1; j < 10; j++) {
                System.out.printf("%3d", i*j);
            }
            System.out.printf("\n");
        }
    }
}
