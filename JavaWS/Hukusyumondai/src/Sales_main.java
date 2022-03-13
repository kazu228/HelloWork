import java.util.ArrayList;
import java.util.List;

public class Sales_main {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        // 変数宣言とインスタンス生成
        boolean is_discount;
        Sales goodsA = new Sales("商品A", 100, 30);
        Sales goodsB = new Sales("商品B", 89, 40);
        Sales goodsC = new Sales("商品C", 250, 90);
        Sales goodsD = new Sales("商品D", 320, 23);

        // 割引率出力
        System.out.println("割引率は" + Sales.getWaribiki() + "です");

        // 商品Aの販売価格と割引価格を出力
        System.out.println(goodsA.getName() + "の通常の販売価格は、" + 
                                            goodsA.getSalesPrice(false) + "円です");
        System.out.println(goodsA.getName() + "の通常の割引価格は、" + 
                                            goodsA.getSalesPrice(true) + "円です");
        // Salesオブジェクトのリストを作成
        List<Sales> goodsArray = new ArrayList<Sales>();
        goodsArray.add(goodsA);
        goodsArray.add(goodsB);
        goodsArray.add(goodsC);
        goodsArray.add(goodsD);

        // 販売価格を全商品出力
        for (Sales goods : goodsArray) {
            is_discount = goods.isOver30();    // 割引ありか、どうか
            System.out.println(goods.getName() + "の価格は、" + 
                            goods.getSalesPrice(is_discount) + "円です");
        }
    }
}
