public class Animal {
    private String name = "";
    private int age = 0;
    public void showProfile(){
        System.out.printf("名前は、%s、%d歳です。\n", name, age);
    }
    public void speak() {
        System.out.println(".........");
    }
    public void setName(String name) {
        this.name = name;
    }
    public void setAge(int age) {
        this.age = age;
    }
}
