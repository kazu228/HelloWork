public class Product_main {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        int result;
        Product prod = new Product();
        prod.setPrice(1000);
        prod.setDisRate(20);
        result = prod.getSellingPrice();
        System.out.printf("商品Aの販売価格は%d円です", result);
    }
}
