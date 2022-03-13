

public class HoimiSlime extends Slime{
    
    public HoimiSlime(String name, int hp, int mp) {
        super(name, hp, mp);
        // this.setName("ホイミ");
        // this.setMp(5);
        // this.setTarget_exist(false);
        Magic hoimiMagic = new Magic("ホイミ", 5, false);
        super.setMagic(hoimiMagic);    // superであることに注意

    }
    public boolean callMagic() {
        boolean tmp = super.callMagic();
        if(tmp){
            this.setHp(this.getHp()+10);
        }
        return tmp;
    }
}
