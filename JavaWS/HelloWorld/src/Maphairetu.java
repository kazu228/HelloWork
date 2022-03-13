import java.util.HashMap;
import java.util.Map;

public class Maphairetu {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        Map<Integer, String> map1 = new HashMap<Integer, String>();
        map1.put(1, "びび");
        map1.put(2, "あゆさん");
        map1.put(3, "ユータ");
        System.out.println(map1);

        // key指定でvalue取得
        System.out.println(map1.get(1));

        // keyが存在するか
        if (map1.containsKey(2)) {
            System.out.println("あります。");
        } else {
            System.out.println("ないです。");
        }

        if (map1.containsKey(4)) {
            System.out.println("あります。");
        } else {
            System.out.println("ないです。");
        }

        // 要素数は.size();

        // 拡張for文
        for (Map.Entry<Integer, String> data: map1.entrySet()) {
            System.out.println(data.getKey() + data.getValue());
        }
        
    }
}
