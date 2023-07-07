import java.util.Scanner;

public class Palindrome {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n;
        System.out.print("Input an integer: ");
        n = in.nextInt();
        palindrome(n);
    }
    static void palindrome(int n){
        if(n<0)
            n=-n;
        int m=n,p=0;
        while(m>0){
            p = p*10 + m%10;
            m=m/10;
        }
        if(p==n)
            System.out.println("Is Palindrome.");
        else
            System.out.println("Isn't a Palindrome.");
    }
}
