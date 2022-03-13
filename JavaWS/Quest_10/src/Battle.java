import java.util.Random;

public class Battle {
    private int hp;
    private int mp;
    private String name;          // キャラクタの名前
    private Magic magic = null;

    // コンストラクタ
    public Battle(String name, int hp, int mp) {
        this.name = name;
        this.hp = hp;
        this.mp = mp;
    }
    // アクセサメソッド
    public void setHp(int hp) {
        if (hp <= 0) {
            this.hp = 0;
            System.out.printf("%sは死んだ。。。\n", name);
        } else if (hp <= 1000) {
            this.hp = hp;
        }
    }
    public void setMp(int mp) {
        if (mp <= 0) {
            this.mp = 0;
        } else if ( mp <= 1000) {
            this.mp = mp;
        }
    }
    public void setName(String name) {
        this.name = name;
    }
    public void setMagic(Magic magic) {
        this.magic = magic;
    }

    public int getHp() {
        return hp;
    }
    public int getMp() {
        return mp;
    }
    public String getName() {
        return name;
    }
    public Magic getMagic() {
        return magic;
    }
    //  自作メソッド
    public void attack(Battle bt) {
        if (!this.isDead()) {        // falseの場合
            System.out.printf("%sは%sに攻撃した\n", this.getName(), bt.getName());
            bt.damage();
        }
    }
    public void escape() {
        System.out.printf("%sは逃げ出した\n", this.getName());
    }
    public void status() {
        System.out.printf("名前:%s  HP:%d  MP:%d\n", this.name, this.hp, this.mp);
    }
    public void damage() {
        int num;
        // 乱数
        Random random = new Random();
        int randomValue = random.nextInt(100);
        System.out.printf("%sは%dのダメージを受けた\n", this.name, randomValue);
        // this.hp = this.hp - randomValue;
        num = this.getHp() - randomValue;          
        this.setHp(num);
    }
    public void damage(int damageNum) {
        System.out.printf("%sは%dのダメージを受けた\n", this.name, damageNum);
        this.setHp(this.getHp()- damageNum);

    }    
    public boolean isDead() {
        if (this.hp == 0) {
            return true; // 死亡
        } else if ( this.hp > 0 ) {
            return false; // 生存
        }
        return false;
    }
    public boolean hasMagic() {
        if (this.magic == null) {
            return false;
        } else {
            return true;
        }
    }
    public boolean isMagic() {
        System.out.printf("%sは%sを唱えた\n", this.name, this.magic.getName());
        // this.getMp()   キャラクタの持っているmp
        // this.magic.getMp() 必要なmp
        if (this.magic.getMp() < this.getMp()) {
            return true;
        } else {
            System.out.printf("しかし、MPが足らなかった・・・\n");
            return false;
        }

    }

    public boolean callMagic() {
        if(this.isDead()) {
            return false;
        }
        if (!this.hasMagic()) {     // null の場合
            return false;
        }
        boolean tmp = this.isMagic();

        if (tmp) {
            this.setMp(this.getMp() - this.magic.getMp());
        }
        return tmp;
    }
    public boolean callMagic(Battle bt) {
        return this.callMagic();
    }
}
