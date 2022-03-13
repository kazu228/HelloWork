package sankaku.util;

public class Color {
    private int red;
    private int green;
    private int blue;
    // コンストラクタ
    public Color(int red, int green, int blue) {
        this.red = red;
        this.green = green;
        this.blue = blue;
    }

    // アクセサメソッド
    // セッター
    public void setRed(int red) {
        this.red = red;
    }
    public void setBlue(int blue) {
        this.blue = blue;
    }
    public void setGreen(int green) {
        this.green = green;
    }
    // ゲッター
    public int getRed() {
        return red;
    }
    public int getBlue() {
        return blue;
    }
    public int getGreen() {
        return green;
    }
}
