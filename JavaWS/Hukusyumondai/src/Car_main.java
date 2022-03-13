import java.util.ArrayList;
import java.util.List;

public class Car_main {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        int ninzu = 4;
        int runnningDistance = 100;

        Car carA = new Car("カローラ", 4, 9.5, 2000);
        Car carB = new Car("フリード", 6, 6.2, 2800);
        Car carC = new Car("ミゼット", 2, 14.8, 660);
        Car carD = new Car("アルファード", 8, 4.5, 3000);

        System.out.printf("車のタイヤは%d本です\n", Car.getTireNum());

        System.out.printf("%sは%sクラスです\n", carA.getName(), carA.getKlass());
        System.out.printf("%sは%sクラスです\n", carB.getName(), carB.getKlass());
        System.out.printf("%sは%sクラスです\n", carC.getName(), carC.getKlass());
        System.out.printf("%sは%sクラスです\n", carD.getName(), carD.getKlass());

        List<Car> carArray = new ArrayList<Car>();
        carArray.add(carA);
        carArray.add(carB);
        carArray.add(carC);
        carArray.add(carD);

        System.out.printf("%d人乗れる車は、\n", ninzu);
        for(int i = 0; i < carArray.size(); i++) {
            if (carArray.get(i).canRide(ninzu)) {
                System.out.println(carArray.get(i).getName());
            }
        }
        System.out.printf("%dkm走るのに必要なガソリン量は、\n", runnningDistance);
        for(int i = 0; i < carArray.size(); i++) {
            System.out.printf("%sは%.4f リットル\n", carArray.get(i).getName(), 
                    carArray.get(i).getRunDistance(runnningDistance));
        }
    }
}
