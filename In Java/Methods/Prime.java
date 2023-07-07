import java.util.Scanner;

public class Prime {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n;
        System.out.print("Input a +ve integer: ");
        n = in.nextInt();
        prime(n);
    }
    static void prime(int n){
        if(n<=1)
            System.out.println("Neither prime nor composite.");
        else{
            for(int i=2; i<=n/2; i++){
                if(n%i==0){
                    System.out.println("Not Prime.");
                    return;
                }
            }
            System.out.println("Prime.");
        }
    }
}
