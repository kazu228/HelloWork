public class Magic {
    private String name;        // 呪文名
    private int mp;
    private boolean target_exist;

    // コンストラクタ
    public Magic(String name, int mp, boolean target_exist) {
        this.name = name;
        this.mp = mp;
        this.target_exist = target_exist;
    }
    // アクセサメソッド
    public void setName(String name) {
        this.name = name;
    }
    public void setMp(int mp) {
        this.mp = mp;
    }
    public void setTarget_exist(boolean target_exist) {
        this.target_exist = target_exist;
    }

    public String getName() {
        return name;
    }
    public int getMp() {
        return mp;
    }
    public boolean isTarget_exist() {
        return target_exist;
    }
}
