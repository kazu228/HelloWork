import java.util.ArrayList;
import java.util.List;

public class Room_main {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        int sum = 0;
        // インスタンス生成
        Room roomA = new Room(1, "A", 30);
        Room roomB = new Room(1, "B", 40);
        Room roomC = new Room(2, "A", 40);
        Room roomD = new Room(2, "B", 38);
        Room roomE = new Room(3, "A", 28);
        Room roomF = new Room(3, "B", 30);

        // リストにオブジェクトを追加
        List<Room> arrayRoom = new ArrayList<Room>();
        arrayRoom.add(roomA);
        arrayRoom.add(roomB);
        arrayRoom.add(roomC);
        arrayRoom.add(roomD);
        arrayRoom.add(roomE);
        arrayRoom.add(roomF);

        // 教室の定員を表示
        System.out.println("教室の定員" + Room.getCapacity());

        // 1年生の在籍人数を表示
        for (Room r : arrayRoom) {
            if (r.getGrade() == 1) {
                sum += r.getNumber();
            }
        }
        // sum = roomA.getNumber() + roomB.getNumber();
        System.out.println("1年生の在籍人数" + sum);

        // 満員の教室名を表示
        System.out.println("満員の教室名");
        for (Room r : arrayRoom) {
            if (r.isFullClass()) {
                System.out.println(r.getGrade()+ "年" + r.getKlass() + "組");
            }
        }

        // 全生徒の人数を表示
        sum = 0;
        for (Room r : arrayRoom) {
            sum += r.getNumber();
        }
        System.out.println("全生徒の人数" + sum);

        // 3年B組の在籍人数を3人減らす
        for (Room r : arrayRoom) {
            if (r.getGrade() == 3 && r.getKlass().equals("B")) {    // Stringクラス(インスタンス)の比較なので、equals()が必要
                r.setNumber(r.getNumber() - 3);
            }
        }

        // 全生徒の人数を表示
        sum = 0;
        for (Room r : arrayRoom) {
            sum += r.getNumber();
        }
        System.out.println("全生徒の人数" + sum);

        // 1年A組と1年B組の少ないクラスに在籍人数を7増やす
        if(roomB.isManyPeople(roomA)) {
            roomA.setNumber(roomA.getNumber() + 7);
        } else {
            roomB.setNumber(roomB.getNumber() + 7);
        }

        // 1年A組と1年B組の在籍人数を表示
        System.out.println("1年A組在籍人数" + roomA.getNumber());
        System.out.println("1年B組在籍人数" + roomB.getNumber());
    }
}
