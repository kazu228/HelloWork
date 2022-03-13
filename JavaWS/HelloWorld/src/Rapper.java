public class Rapper {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        String str = "120";
        // int型にキャスト
        int a1 = Integer.parseInt(str);

        System.out.println("a1 :" + a1);
        // double型にキャスト
        double a2 = Double.parseDouble(str);
        System.out.println("a2 :" + a2);

        // Intger型にキャスト
        Integer a3 = Integer.valueOf(str);
        System.out.println("a3 :" + a3);

        // Float型にキャスト
        Float a4 = Float.valueOf(str);
        System.out.println("a4 :" + a4);

        // Integerをlongに変換
        Integer x = 100;
        long y = x.longValue();
        System.out.println("y" + y);

        // Integerをdoubleに変換
        double z = x.doubleValue();
        System.out.println("z" + z);

        // IntegerをStringに変換する
        String str1 = x.toString();
        System.out.println("str1     " + str1);

        // FloatをStringに変換する
        String str2 = a4.toString();
        System.out.println("str2     " + str2);

        // オブジェクトの比較
        Integer yy = 200;
        if (x.equals(yy)) {
            System.out.println("同じ");
        } else {
            System.out.println("異なる");
        }
        // オブジェクト大小比較
        if (x.compareTo(yy) == 0) {
            System.out.println("同じ");
        } else if (x.compareTo(yy) > 0) {
            System.out.println("xの方が大きい");
        } else {
            System.out.println("yyの方が大きい");
        }
    }

}
