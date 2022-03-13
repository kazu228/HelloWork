public class Dog_main {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        // 1
        Dog inu1 = new Dog();
        inu1.setName("太郎");
        inu1.showProfile();

        // 2
        Dog inu2 = new Dog();
        inu2.setName("二郎");
        inu2.setAge(3);
        inu2.showProfile();

        // ３
        Dog inu3 = new Dog();
        Dog inu4 = new Dog();
        inu3.setName("ポチ");
        inu3.setAge(1);

        inu4.setName("クロ");
        inu4.setAge(4);

        inu3.showProfile();
        inu4.showProfile();
        // 4
        Dog inu5 = new Dog("柴犬");
        inu5.setName("ハッシー");
        inu5.setAge(38);
        inu5.showProfile();
    }
}
