import java.util.HashMap;
import java.util.Map;

public class Maphairetu {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        // Mapクラスの練習問題
        // 1
        int input_num = 3;

        Map<Integer, String> fruits = new HashMap<Integer, String>();
        fruits.put(1, "りんご");
        fruits.put(2, "みかん");
        fruits.put(3, "なし");
        fruits.put(4, "すいか");
        fruits.put(5, "マンゴー");

        System.out.println(fruits.get(input_num));

        // 2
        String ip_num = "1198000";
        int ip_num_size = ip_num.length();
        int i;
        int first_kanma_position = ip_num_size % 3 - 1;
        StringBuilder result = new StringBuilder();
        Map<String, String> kanji = new HashMap<String, String>();
        // keyとvalueの設定
        kanji.put("0", "◯");
        kanji.put("1", "一");
        kanji.put("2", "二");
        kanji.put("3", "三");
        kanji.put("4", "四");
        kanji.put("5", "五");
        kanji.put("6", "六");
        kanji.put("7", "七");
        kanji.put("8", "八");
        kanji.put("9", "九");
        //  keyとip_numが合致するか調べる
        for (i = 0; i < ip_num_size; i++) {
            for (Map.Entry<String, String> data : kanji.entrySet()) {
                if (data.getKey().equals(ip_num.substring(i, i+1))) {   //containsKey()でやった方がいい
                    result.append(data.getValue());
                    // カンマの追加  できていない
                    if (i == first_kanma_position && i < ip_num_size-1) {
                        result.append(",");
                        first_kanma_position += 3;
                    }
                }
            }        
        }
        System.out.println(result);
    }
}
