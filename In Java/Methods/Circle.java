import java.util.Scanner;

public class Circle {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double r;
        System.out.print("Input radius of circle: ");
        r = in.nextDouble();
        circle(r);

    }
    static void circle(double r){
        System.out.println("Circumference: "+ (2*3.1459*r));
        System.out.println("Area: "+ (3.1459*r*r));
    }
}
