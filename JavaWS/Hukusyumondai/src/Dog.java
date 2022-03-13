public class Dog {
    private String name = "";
    private String kind = null;
    private int age = -1;
    // オリジナルのコンストラクタを定義したら、省略されるため
    public Dog() {
        
    }
    public Dog(String kind) {
        this.kind = kind;
    }
    public void setName(String name) {
        this.name = name;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public void showProfile() {
        System.out.printf("名前は、%sです。\n", name);
        if (age != -1){
            System.out.printf("年齢は%d歳です。\n",age);
        }
        if (kind != null) {
            System.out.printf("犬種は%sです。\n",kind);
        }
    }
}
