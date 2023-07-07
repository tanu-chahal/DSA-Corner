import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Input two integers: ");
        double num1 = in.nextDouble();
        double num2 = in.nextInt();
        System.out.print("Input the operation (+ - * / %): ");
        char op = in.next().trim().charAt(0);
        double res;
        switch (op) {
            case '+' -> System.out.println(num1 + " + " + num2 + " = " + (num1 + num2));
            case '-' -> System.out.println(num1 + " - " + num2 + " = " + (num1 - num2));
            case '*' -> System.out.println(num1 + " * " + num2 + " = " + (num1 * num2));
            case '/' -> {
                if (num2 != 0)
                    System.out.println(num1 + " / " + num2 + " = " + (num1 / num2));
                else
                    System.out.println("Can't divide by 0");
            }
            case '%' -> {
                if (num2 != 0)
                    System.out.println(num1 + " % " + num2 + " = " + (num1 % num2));
                else
                    System.out.println("Can't divide by 0");
            }
            default -> System.out.println("Invalid Operator!");
        }

    }
}
