public class MetalSlime extends Slime{
    public MetalSlime(String name, int hp, int mp){
        super(name, hp, mp);
        Magic metalMagic = new Magic("メラ", 5, true);
        super.setMagic(metalMagic);
    }

    public boolean callMagic(Battle bt){
        boolean tmp = super.callMagic(bt);
        if (tmp) {
            bt.damage(10);
        }
        return tmp;
    }
}
