public class Soryo extends Hero{
    public Soryo(String name, int hp, int mp) {
        super(name, hp, mp);
        Magic SoryoMagic = new Magic("ホイミ", 5, true);
        super.setMagic(SoryoMagic);
    }
    public boolean callMagic(Battle bt) {
        boolean tmp = super.callMagic(bt);
        if (tmp) {
            bt.setHp(bt.getHp()+10);
            System.out.printf("HP回復相手の%sのHPが10回復した。\n", bt.getName());
            bt.status();
        }
        return tmp;
    }
}
