public class Itimonme5 {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        for(int i = 1; i < 10; i++) {
            kuku(i);
        }
    }
    private static void kuku(int i) {
        
        for (int j = 1; j < 10; j++) {
            System.out.printf("%3d", i*j);
        }
        System.out.printf("\n");
    }
}
