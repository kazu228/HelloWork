public class Product {
    // プロパティ
    private int price;
    private int disRate;

    // 販売価格を求めるメソッド
    public int getSellingPrice() {
        return (int) (price * (100 - disRate) / 100.0);
    }

    // アクセサメソッド
    public void setPrice(int price) {
        this.price = price;
    }
    public void setDisRate(int disRate) {
        this.disRate = disRate;
    }
    public int getPrice() {
        return price;
    }
    public int getDisRate() {
        return disRate;
    }
}
