import java.util.Scanner;

public class Voter {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a;
        System.out.print("Input your age: ");
        a = in.nextInt();
        isEligible(a);
    }
    static void isEligible(int a){
        if(a>=18)
            System.out.println("Can vote.");
        else
            System.out.println("Can't vote.");
    }
}
