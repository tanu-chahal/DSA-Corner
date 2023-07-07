import java.util.Scanner;

public class MinMax {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a,b,c;
        System.out.print("Input three integers: ");
        a = in.nextInt();
        b = in.nextInt();
        c = in.nextInt();
        max(a,b,c);
        min(a,b,c);
    }

    static void max(int a, int b, int c){
        if(a>b)
            if(a>c)
                System.out.println(a + " is maximum.");
            else
                System.out.println(c + " is maximum.");
        else
            if(b>c)
                System.out.println(b + " is maximum.");
            else
                System.out.println(c + " is maximum.");
    }
    static void min(int a, int b, int c){
        if(a<b)
            if(a<c)
                System.out.println(a + " is minimum.");
            else
                System.out.println(c + " is minimum.");
        else
        if(b<c)
            System.out.println(b + " is minimum.");
        else
            System.out.println(c + " is minimum.");
    }
}
