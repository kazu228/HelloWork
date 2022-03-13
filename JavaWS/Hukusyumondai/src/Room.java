

public class Room {
    /**
     * 学年
     */
    private int grade;
    /**
     * クラス
     */
    private String klass;
    /**
     *  在籍人数
     */
    private int number;
    /**
     * コンストラクタ
     * @param grade      学年
     * @param klass      クラス
     * @param number     在籍人数
     */
    public Room(int grade, String klass, int number) {
        this.grade = grade;
        this.klass = klass;
        this.number = number;
    }
    /**
     * 定員人数を返す
     * @return   定員数
     */
    public static int getCapacity() {
        return 40;
    }
    /**
     * 定員数か(true)、否か(false)
     * @return　定員数か、否か
     */
    public boolean isFullClass() {
        return  (number == getCapacity());
    }
    /**
     * 在籍人数の比較
     * @param room     教室のオブジェクト
     * @return         呼び出しオブジェクトが多い(true)少ない(false)
     */
    public boolean isManyPeople(Room room) {
        return (number > room.number);              // getNumber() > room.getNumber()を使ってもいい
    }
    /**
     * 学年を取得
     * @return 　学年
     */
    public int getGrade() {
        return grade;
    }
    /**
     * クラス取得
     * @return  クラス
     */
    public String getKlass() {
        return klass;
    }
    /**
     * 在籍人数の取得
     * @return   在籍人数
     */
    public int getNumber() {
        return number;
    }
    /**
     * 在籍人数を代入
     * @param number  在籍人数
     */
    public void setNumber(int number) {
        this.number = number;
    }
}

