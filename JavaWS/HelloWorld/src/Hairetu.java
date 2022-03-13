import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Hairetu {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        // リストの宣言、代入
        List<String> arrayStr1 = new ArrayList<String>();
        arrayStr1.add("apple");
        arrayStr1.add("orange");
        System.out.println(arrayStr1);

        // リストの先頭だけを表示
        System.out.println(arrayStr1.get(0));

        // 要素数の取得
        System.out.println(arrayStr1.size());

        // 配列が同じかどうか？？
        List<String> arrayStr2 = new ArrayList<String>();
        arrayStr2.add("apple");
        arrayStr2.add("orange");
        arrayStr2.add("grape");
        if (arrayStr1.equals(arrayStr2)) {
            System.out.println("同じです。");
        } else {
            System.out.println("違います。");
        }
        // 配列の要素にある要素があるか、どうか
        if (arrayStr2.contains("grape")){
            System.out.println("含まれている");
        } else {
            System.out.println("含まれていない");
        }
        // 要素の並び替え（昇順）
        Collections.sort(arrayStr2);
        System.out.println(arrayStr2);

        // 要素の挿入
        arrayStr2.add(2, "lemon");
        System.out.println(arrayStr2);

        // 要素の更新
        arrayStr2.set(1, "banana");
        System.out.println(arrayStr2);

        // 要素の削除
        arrayStr2.remove(2);
        System.out.println(arrayStr2);

        // 要素の全削除
        arrayStr2.clear();
        System.out.println(arrayStr2);

        // 拡張for文 vscodeだと、foreachででてくる
        for (String fruit : arrayStr1) {
            System.out.println(fruit);
        }


    }
}
