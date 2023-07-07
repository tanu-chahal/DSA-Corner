import java.util.Scanner;

public class EvenOdd {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a;
        System.out.print("Input an integer: ");
        a = in.nextInt();
        evenodd(a);
    }
    static void evenodd(int a){
        if(a%2==0)
                System.out.println(a + " is even.");
        else
            System.out.println(a + " is odd.");
    }
}
