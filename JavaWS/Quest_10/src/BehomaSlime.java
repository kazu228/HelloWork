public class BehomaSlime extends Slime{
    public BehomaSlime(String name, int hp, int mp) {
        super(name, hp, mp);
        Magic BehomaMagic = new Magic("ベホマ", 20, false);
        super.setMagic(BehomaMagic);
    }
    public boolean callMagic() {
        boolean tmp = super.callMagic();
        if (tmp) {
            this.setHp(this.getHp()+30);
        }
        return tmp;
    }
}
