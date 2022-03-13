import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Itimonme4 {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        // 復習問題１、配列
        // ５
        // 1
        int i;
        String str;
        int num;
        Scanner scn = new Scanner(System.in);
        List<Integer> arrayInt = new ArrayList<Integer>();

        for ( i = 0; i < 10; i++ ) {
            str = scn.next();
            num = Integer.parseInt(str);
            arrayInt.add(num);
        }
        
        System.out.println(arrayInt);
        Collections.sort(arrayInt);
        System.out.println(arrayInt);
        // 2
        System.out.println(Collections.max(arrayInt));
        System.out.println(Collections.min(arrayInt));

        // 別解
        int[] arrayInt2 = new int[10];

        for ( i = 0; i < 10; i++ ) {
            str = scn.next();
            num = Integer.parseInt(str);
            arrayInt2[i] = num;
        }
        System.out.println(Arrays.toString(arrayInt2));
        Arrays.sort(arrayInt2);
        System.out.println(Arrays.toString(arrayInt2));
        // 2
        System.out.println(arrayInt2[arrayInt2.length-1]);
        System.out.println(arrayInt2[0]);
        
        scn.close();
    }
}
