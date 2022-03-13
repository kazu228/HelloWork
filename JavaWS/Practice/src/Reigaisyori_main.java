import java.util.ArrayList;
import java.util.List;

public class Reigaisyori_main {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        // 1
        List<String> animals = new ArrayList<String>();
        animals.add("Cat");
        animals.add("Tiger");
        animals.add("Lion");
        animals.add("Leopard");

        // 2
        System.out.println(animals.get(1));

        // 3
        // System.out.println(animals.get(4));

        // 4 5
        try {
            System.out.println(animals.get(4)); 
        } catch (IndexOutOfBoundsException e){
            System.out.println("要素数以上の数値が入力されました。");
        } finally {
            System.out.println("処理終了");
        }
        // 6
        String str = "Hello!!!";

        // 7
        System.out.println(str.substring(2,4));

        // 8
        if(str.substring(7, 8).equals("!")) {
            System.out.println("ビックリマークです");
        }

        // 9
        // if(str.substring(8, 9).equals("!")) {
        //     System.out.println("ビックリマークです");
        // }

        // 10
        try{
            if(str.substring(8, 9).equals("!")) {
                System.out.println("ビックリマークです");
            }  
        } catch (StringIndexOutOfBoundsException e) {          // Javadocでは、例外メッセージが少し異なる
            System.out.println("StringIndexOutOfBoundsException");
            System.out.println("文字数をオーバーしています");
        } finally {
            System.out.println("処理終了");
        }
    }
}
