import java.util.Scanner;

public class PythagoreanTriplet {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a,b,c;
        System.out.print("Input three integers: ");
        a = in.nextInt();
        b = in.nextInt();
        c = in.nextInt();
        pythagoreanTriplet(a,b,c);
    }
    static void pythagoreanTriplet(int a, int b, int c){
        if(a>b) {
            if (a > c) {
                if (a * a == (b * b + c * c)) {
                    System.out.println("Is a Pythagorean Triplet");
                    return;
                }
            }
            else {
                    if (c*c == (b * b + a * a)) {
                        System.out.println("Is a Pythagorean Triplet");
                        return;
                    }
                }
        }
        else {
                    if (b > c) {
                        if (b * b == (a * a + c * c)) {
                            System.out.println("Is a Pythagorean Triplet");
                            return;
                        }
                    }
                    else {
                            if ((b * b + a * a) == c * c) {
                                System.out.println("Is a Pythagorean Triplet");
                                return;
                            }
                        }
                }

            System.out.println("Isn't a Pythagorean Triplet.");
    }
}
