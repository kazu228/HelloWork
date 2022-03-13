import sankaku.proc.Sankaku;
import sankaku.util.*;

public class App {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");

        // インスタンスを生成する
        Sankaku sankaku_A = new Sankaku();
        // sankaku_A.teihen = 6;
        sankaku_A.setTeihen(6);
        // sankaku_A.takasa = 4;
        sankaku_A.setTakasa(4);
        System.out.printf("三角A 底辺:%d 高さ:%d", sankaku_A.getTeihen(), sankaku_A.getTakasa());
        float menseki = sankaku_A.getMenseki();
        System.out.printf("変更前三角A:面積%f\n", menseki);
        sankaku_A.sizeBigger(2, 3);
        menseki = sankaku_A.getMenseki();
        System.out.printf("変更後三角A:面積%f\n", menseki);

        Sankaku sankaku_B = new Sankaku();
        // sankaku_B.teihen = 7;
        sankaku_B.setTeihen(7);
        // sankaku_B.takasa = 5;
        sankaku_B.setTakasa(5);
        // System.out.printf("三角B 底辺:%d 高さ:%d", sankaku_B.teihen, sankaku_B.takasa);
        System.out.printf("三角B 底辺:%d 高さ:%d", sankaku_B.getTeihen(), sankaku_B.getTakasa());
        menseki = sankaku_B.getMenseki();
        System.out.printf("三角B:面積%f\n", menseki);

        Sankaku sankaku_C = new Sankaku();
        // sankaku_C.teihen = 10;
        sankaku_C.setTeihen(10);;
        // sankaku_C.takasa = 3;
        sankaku_C.setTakasa(3);
        // System.out.printf("三角C 底辺:%d 高さ:%d", sankaku_C.teihen, sankaku_C.takasa);
        System.out.printf("三角C 底辺:%d 高さ:%d", sankaku_C.getTeihen(), sankaku_C.getTakasa());
        menseki = sankaku_C.getMenseki();
        System.out.printf("三角C:面積%f\n", menseki);


        Sankaku  sankaku_D = new Sankaku(4, 8);
        System.out.printf("三角D 底辺:%d 高さ:%d", sankaku_D.getTeihen(), sankaku_D.getTakasa());        
        menseki = sankaku_D.getMenseki();
        System.out.printf("三角D:面積%f\n", menseki);


        // クラスメソッド
        int sidenum = Sankaku.numSide();
        System.out.printf("三角形の辺の数:%d\n", sidenum);

        // 継承のところ
        sankaku_A.setIro("赤");
        System.out.printf("三角形Aの色:%s\n", sankaku_A.getIro());

        // Colorクラスの内容を呼び出す
        System.out.printf("三角形Aの色:%d%d%d\n", sankaku_A.getCl().getRed(), sankaku_A.getCl().getGreen(),sankaku_A.getCl().getBlue());
        // もっといい呼び方
        Color cl = sankaku_A.getCl();
        System.out.printf("三角形Aの色:%d%d%d\n", cl.getRed(), cl.getGreen(), cl.getBlue());

        // セッターを使ってみる
        cl = new Color(12, 13, 14);
        sankaku_A.setCl(cl);
        // cl から呼び出さないことに注意
        System.out.printf("三角形Aの色:%d%d%d\n", sankaku_A.getCl().getRed(), sankaku_A.getCl().getGreen(), sankaku_A.getCl().getBlue());
    }
}
