import java.util.Scanner;

public class DigitOccurence {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter you number: ");
        int num = in.nextInt();
        System.out.print("Enter you digit whose occurrence you want: ");
        int digit = in.nextInt();

        int times = 0;
        int n = num;
        while(n>0){
            if(n%10==digit)
                times++;
            n=n/10;
        }
        System.out.println(digit + " appears " + times + " times in " + num);
    }
}
