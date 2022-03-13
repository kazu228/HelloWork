

public class Car {
    
    /** 
     * 　車の名前
     */
    private String name;
    /** 
     * 　定員数
     */
    private int capacity;
    /** 
     * 　燃料
     */
    private double fuel;
    /** 
     * 　排気量
     */
    private int cc;

    /**
     * コンストラクタ
     * @param name      名前
     * @param capacity  定員
     * @param fuel      燃費
     * @param cc        排気量
     */
    public Car(String name, int capacity, double fuel, int cc) {
        this.name = name;
        this.capacity = capacity;
        this.fuel = fuel;
        this.cc = cc;
    }
    /** 
     * タイヤの数を返す
     * @return   タイヤの数
     */
    public static int getTireNum() {
        return 4;
    }
    /**　
     *  クラスを判定
     * @return  排気量のクラス
     */
    public String getKlass() {
        String rank;
        if (cc >= 2500) {
            rank = "L";
        } else if (cc >= 2000) {
            rank = "M";
        } else {
            rank = "S";
        }
        return rank;
        // if (cc >= 2500) {
        //     return "L";
        // } else if (cc >= 2000) {
        //     return "M";
        // } else {
        //     return "S";
        // }
    }
    /**
     * 乗車数と定員数を比較して、判定
     * @param riders  乗車数
     * @return　　　　　定員以上か（true）,未満か(false)
     */
    public boolean canRide(int riders) {
        return riders <= capacity;
        // if (riders <= capacity) {
        //     return true;
        // } else {
        //     return false;
        // }
    }
    /**　
     * 走行距離から燃費量を求める
     * @param distance    走行距離
     * @return　　　　　　　走るのに必要な燃料量
     */
    public double getRunDistance(int distance) {
        return distance / fuel;
        // double result = distance / fuel;
        // return result;
    }
    /**
     * 車の名前を取得する
     * @return　　　　　　　車の名前
     */
    public String getName() {
        return name;
    }
}
