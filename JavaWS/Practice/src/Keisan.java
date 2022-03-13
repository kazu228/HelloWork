public class Keisan {
    public static int getValueDouble(int num) {
        return num * 2;
    }
    public static float getValueHalf(int num) {
        return (float) (num / 2.0);
    }
    public static boolean isEven(int num) {
        if (num % 2 == 0) {
            return true;
        } else {
            return false;
        }
    }
}
