import java.util.Scanner;

public class Sum {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double a,b;
        System.out.print("Input two numbers: ");
        a = in.nextDouble();
        b = in.nextDouble();
        sum(a,b);
    }
    static void sum(double a, double b){
        double sum = a + b;
        System.out.println("Sum: "+sum);
    }
}
