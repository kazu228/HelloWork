import java.util.ArrayList;
// import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class Hairetu {
    public static void main(String[] args) throws Exception {
        System.out.println("Hello, World!");
        // 配列練習問題
        // 1
        // 1
        // aryName.size();
        // 2
        // aryName.get(1);
        // 3
        // aryName.get(aryName.size()-1);

        // 2
        // 1
        List<Double> aryNum = new ArrayList<Double>();
        aryNum.add(5.0);
        aryNum.add(185.3);
        aryNum.add(120.6);
        aryNum.add(148.0);
        aryNum.add(176.4);
        Integer num = 5;
        if (aryNum.contains(num.doubleValue())) {
            System.out.println("含まれる");
        } else {
            System.out.println("含まれない");
        }
        // 2
        Collections.sort(aryNum, Collections.reverseOrder());
        System.out.println(aryNum);
        // 3
        int arysize = aryNum.size();
        System.out.println(aryNum.get(arysize-1));
        // 4
        System.out.println(aryNum.get(0));

        // 3
        // 1
        List<String> fruits = new ArrayList<String>();
        fruits.add("Orange");
        fruits.add("Apple");
        fruits.add("Banana");
        System.out.println(fruits);

        // 2　　　indexOfをつかってもいい
        fruits.set(0, "Grape");
        System.out.println(fruits);

        // 3     indexOfをつかってもいい
        fruits.add(2, "Kiwi");
        System.out.println(fruits);

        // 4
        fruits.remove(3);       // 直接"Banana"をいれてもいい
        System.out.println(fruits);

        // 5　　Collectionsのswapでもいい
        String tmp;
        int fsize = fruits.size();
        tmp = fruits.get(0);
        fruits.set(0, fruits.get(fsize-1));
        fruits.set(fsize-1, tmp);
        System.out.println(fruits);

        // System.out.println("別解");
        // int fsize = fruits.size();
        // String tmp1 = fruits.get(0);
        // String tmp2 = fruits.get(fsize-1);
        // fruits.set(0, tmp2);
        // fruits.set(fsize-1, tmp1);
        // System.out.println(fruits);
        // 6
        System.out.println(fsize);

        // 7
        if (fruits.contains("Orange")) {
            System.out.println("含まれる");
        } else {
            System.out.println("含まれない");
        }

        // ８
        Collections.sort(fruits);
        System.out.println(fruits);
    }
}
