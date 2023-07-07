import java.util.Scanner;

public class Grade {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n;
        System.out.print("Input your marks: ");
        n = in.nextInt();
        grade(n);
    }
    static void grade(int m){
        if (m>=91 && m<=100)
            System.out.println("Grade: AA");
        else if(m>=81 && m<=90)
            System.out.println("Grade: AB");
        else if(m>=71 && m<=80)
            System.out.println("Grade: BB");
        else if(m>=61 && m<=70)
            System.out.println("Grade: BC");
        else if(m>=51 && m<=60)
            System.out.println("Grade: CC");
        else if(m>=41 && m<=50)
            System.out.println("Grade: DD");
        else
            System.out.println("Fail");
    }
}
