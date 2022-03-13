import java.io.BufferedReader;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Filerensyumondai {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");

        // 練習問題

        // 1
        File file = new File("/Users/lss-guest/Desktop/input.txt");
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

            System.out.println("文字列を入力してください。");

            String str = br.readLine();

            FileWriter fileWriter = new FileWriter(file);
            fileWriter.write(str);
            fileWriter.close();

        } catch (IOException e) {
            System.out.println(e);
        }

        // 2
        Path path1 = Paths.get("/Users/lss-guest/Desktop/input.txt");
        Path path2 = Paths.get("/Users/lss-guest/Desktop/input2.txt");

        // コピー先があるかどうか、確認、あれば、削除する処理があってもいい
        try {
            Files.copy(path1, path2);
        }catch (IOException e) {
            System.out.println(e);
        }

        // 3
        if (file.delete()) {
            System.out.println("削除成功");
        } else {
            System.out.println("削除失敗");
        }

        // 4
        
    }
}
