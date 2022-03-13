public class Rapper {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        // ラッパクラスの練習問題
        // １
        Float num1 = (float) -2.55;
        // 2
        System.out.println("num1 int " + num1.intValue());
        // 3
        System.out.println("num1 float " + num1.floatValue());
        // 4
        Integer num2 = 12;
        // 5
        System.out.println("num2 float" + num2.floatValue());
        // 6
        int result = num1.compareTo(num2.floatValue());
        if (result == 0) {
            System.out.println("同じ大きさ");
        } else if ( result > 0) {
            System.out.println("num1の方が大きい");
        } else {
            System.out.println("num2の方が大きい");
        }
        
    }
}
