package sankaku.proc;
import sankaku.util.*;

public class Zukei {
    private String iro;
    private Color cl = new Color(4, 2, 25);

    // アクセサメソッド
    // セッター
    public void setIro(String iro) {
        this.iro = iro;
    }
    public void setCl(Color cl) {
        this.cl = cl;
    }
    // ゲッター
    public String getIro() {
        return iro;
    }
    public Color getCl() {
        return cl;
    }
}
