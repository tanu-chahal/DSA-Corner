import java.util.Scanner;

public class Product {
    public static void main(String[] args) {
            Scanner in = new Scanner(System.in);
            double a,b;
            System.out.print("Input two numbers: ");
            a = in.nextDouble();
            b = in.nextDouble();
            double p = product(a,b);
        System.out.println("Product: "+p);
        }
        static double product(double a, double b){
            return a*b;
        }

}
