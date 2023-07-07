import java.util.Scanner;

public class ReturnPrimes {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a,b;
        System.out.print("Input two +ve integers: ");
        a = in.nextInt();
        b = in.nextInt();
        printPrimes(a,b);
    }
    static void printPrimes(int a, int b){
        int i;
        System.out.print("Our prime numbers between "+a+" & "+b+": ");
        while(a<=b) {
            i=2;
            while (i <= a / 2) {
                if (a % i == 0) {
                    break;
                }
                i++;
            }
            if(i>a/2)
            System.out.print(a+ " ");

            a++;
        }
       System.out.println("end.") ;
    }
}
