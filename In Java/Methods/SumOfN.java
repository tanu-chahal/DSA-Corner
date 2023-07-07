import java.util.Scanner;

public class SumOfN {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n;
        System.out.print("Input a Natural Number: ");
        n = in.nextInt();

        int sum = sumOfNatural(n);
        System.out.println("Sum of "+n+" natural numbers: "+sum);
    }
    static int sumOfNatural(int n){
        int s =0, i =1;
        while(i<=n){
            s=s+i;
            i++;
        }
        return s;
    }
}
