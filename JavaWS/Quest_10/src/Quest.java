import java.util.Random;

public class Quest {
    public static void main(String[] args) throws Exception {

        Slime slimeA = new Slime("スライムA", 100, 100);
        slimeA.status();
        // slimeA.damage();
        // slimeA.status();
        HoimiSlime slimeB = new HoimiSlime("ホイミスライム", 120, 120);
        slimeB.status();
        // if (slimeB.callMagic()) {
        //     slimeB.status();
        // }
        MetalSlime slimeC = new MetalSlime("メタルスライム", 499, 499);
        slimeC.status();
        // if(slimeC.callMagic(slimeB)) {
        //     slimeC.status();
        //     slimeB.status();
        // }
        BehomaSlime slimeD = new BehomaSlime("ベホマスライム", 500, 500);
        slimeD.status();
        Hero yusha = new Hero("勇者", 300, 100);
        yusha.status();
        Soryo soryo = new Soryo("僧侶", 300, 250);
        soryo.status();
        
        // スライムたちを配列に入れる
        Slime[] slimeArray = new Slime[4];
        slimeArray[0] = slimeA;
        slimeArray[1] = slimeB;
        slimeArray[2] = slimeC;
        slimeArray[3] = slimeD; 

        while (true) {
            Random random = new Random();
            int randomValue = random.nextInt(slimeArray.length);

            // 対戦スライム
            Slime targetSlime = slimeArray[randomValue];
            // 勇者の攻撃
            yusha.attack(targetSlime);
            // 対戦スライムの攻撃    
            if(!targetSlime.isDead()){   // 死んでいない場合
                if (targetSlime.hasMagic()) {
                    if(targetSlime.getMagic().isTarget_exist()){
                        targetSlime.callMagic(yusha);
                    } else {
                        targetSlime.callMagic();
                    }
                } else {
                    targetSlime.attack(yusha);
                }
            }
            // 勇者の体力判定
            if (yusha.getHp() < 30) {
                soryo.callMagic(yusha);
            } 
            if (yusha.getHp() < 10) {
                yusha.escape();
                break;
            }
            // ステータス出力
            yusha.status();
            targetSlime.status();
            // 死亡判定

            if (yusha.isDead() || targetSlime.isDead() ){
                break;
            }
        }
    }
}
