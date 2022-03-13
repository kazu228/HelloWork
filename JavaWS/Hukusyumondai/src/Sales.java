

public class Sales {
    /**
     *  商品名
     */
    private String name;
    /**
     *  単価
     */
    private int price;
    /**
     *   数量
     */
    private int number;
    /**
     *   数量が30を超えるか
     */
    private boolean over30;
    /**
     * コンストラクタ
     * @param name     商品名
     * @param price    単価
     * @param number   数量
     */
    public Sales(String name, int price, int number) {
        this.name = name;
        this.price = price;
        this.number = number;
        // 数量が30を超えるか
        this.over30 = (number >= 30);
        // if (number >= 30) {
        //     this.over30 = true;
        // } else {
        //     this.over30 = false;
        // }
    }
    /**
     * 割引率を返す
     * @return   割引率
     */
    public static double getWaribiki() {
        return 0.3;
    }
    /**
     *  割引ありか、なしかに応じて、販売価格を計算
     * @param is_waribiki    割引ありか(true)、なし(false)
     * @return    販売価格
     */
    public int getSalesPrice(boolean is_waribiki){
        double total = price * number;
        if (is_waribiki) {
            total *= (1 - getWaribiki());
        }
        return (int) total;
        // if (is_waribiki) {
        //     return (int) (price * number * (1 - getWaribiki()));
        // } else {
        //     return price * number;
        // }
    }
    /**
     * 商品名を取得
     * @return    商品名
     */
    public String getName() {
        return name;
    }
    /**
     *  数量が30を越えたか
     * @return    越えたか(true)、否か(false)
     */
    public boolean isOver30() {
        return over30;
    }
}
