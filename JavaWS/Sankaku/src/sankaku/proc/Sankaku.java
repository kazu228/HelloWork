package sankaku.proc;

public class Sankaku extends Zukei{
    private int teihen;
    private int takasa;

    // コンストラクタ
    public Sankaku() {
    }
    public Sankaku(int teihen, int takasa) {
        this.teihen = teihen;
        this.takasa = takasa;
    }

    public float getMenseki() {
        float menseki = 0;
        menseki = (float)teihen * (float)takasa / 2;
        return menseki;
    }

    public void sizeBigger(int widthRatio, int heightRation) {
        teihen *= widthRatio;
        takasa *= heightRation;
    }
    // クラスメソッド
    public static int numSide() {
        return 3;
    }

    // アクセサメソッド
    // セッター
    public void setTeihen(int teihen) {
        this.teihen = teihen;
    }
    // ゲッター
    public int getTeihen() {
        return teihen;
    }

    public void setTakasa(int takasa) {
        this.takasa = takasa;
    }
    public int getTakasa() {
        return takasa;
    }
}

