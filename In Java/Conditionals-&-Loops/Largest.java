import java.util.Scanner;

public class Largest {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a, b ,c;
        System.out.print("Input 3 integers, to find the largest:");
        a = in.nextInt();
        b = in.nextInt();
        c = in.nextInt();

//        if(a>b){
//            if(a>c)
//                System.out.println(a + " is the largest.");
//            else
//                System.out.println(c + " is the largest.");
//        }
//        else{
//            if(b>c)
//                System.out.println(b + " is the largest.");
//            else
//                System.out.println(c + " is the largest.");
//        }

        //Easy way
//        int max = a;
//        if(b>max)
//            max =b;
//        if(c>max)
//            max=c;
//        System.out.println(max + " is the largest.");

        //Even easier
        System.out.println(Math.max(c, Math.max(a,b)) + " is the largest.");
    }
}
