import java.util.Scanner;
public class ReverseANum {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter you number: ");
        int num = in.nextInt();

        int n = num;
        int revNum = 0;
        while(n!=0){
            revNum = revNum*10 + n%10;
            n=n/10;
        }

        System.out.println("Reverse Of " + num + " is " + revNum);
    }
}
