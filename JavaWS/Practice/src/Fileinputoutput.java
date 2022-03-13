import java.io.*;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Fileinputoutput {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");


        // 読み込み
        File file = new File("/Users/lss-guest/Desktop/out.txt");
        // FileReader fileReader = new FileReader(file);
        try {
            FileReader fileReader = new FileReader(file);
            BufferedReader br = new BufferedReader(fileReader);
            String str = br.readLine();
            while (str != null) {
                System.out.println(str);
                str = br.readLine();
            }
            br.close();
        } catch (FileNotFoundException e) {    // eは例外処理の情報のインスタンス
            System.out.println("指定したファイルは見つかりませんでした");
            // e.printStackTrace();
        } catch (IOException e) {
            System.out.println(e);
        }


        // 書き込み
        File file2 = new File("/Users/lss-guest/Desktop/sample.txt");

        try {
            FileWriter fileWriter = new FileWriter(file2);
            fileWriter.write("こんにちは");
            fileWriter.close();
        } catch (IOException e) {
            System.out.println(e);
        }

        // ファイルの存在チェック
        
        if (file2.exists()) {
            System.out.println("存在する");
        } else {
            System.out.println("存在しない");
        }

        // ファイルのコピー
        Path path1 = Paths.get("/Users/lss-guest/Desktop/out.txt");
        Path path2 = Paths.get("/Users/lss-guest/Desktop/outc.txt");
        try {
            Files.copy(path1, path2);
        } catch (IOException e) {
            System.out.println(e);
        }

        // ファイルの移動
        File file3 = new File("/Users/lss-guest/Desktop/outc.txt");
        File file4 = new File("/Users/lss-guest/Desktop/outm.txt");
        if (file3.renameTo(file4)) {
            System.out.println("移動に成功");
        } else {
            System.out.println("移動に失敗");
        }

        // ファイルの削除
        if (file4.delete()) {
            System.out.println("削除に成功");
        } else {
            System.out.println("削除に失敗");
        }

        // バッファードリーダーを使った入出力
        try {
            BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));

            System.out.println("文字列を入力してください。");

            String str2 = br2.readLine();
            System.out.println("今入力されたデータは" + str2 + "です");

        } catch (IOException e) {
            System.out.println(e);
        }

    }
    
}
