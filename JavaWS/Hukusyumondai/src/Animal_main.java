public class Animal_main {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        // 1
        Cat neko = new Cat();
        neko.setName("タマ");
        neko.setAge(23);
        neko.showProfile();
        neko.sleep();

        // 2
        Horse uma = new Horse();
        uma.setName("かず");
        uma.setAge(11);
        uma.showProfile();
        uma.run();

        // 3
        neko.speak();
        uma.speak();

        // 4
        
    }
}
