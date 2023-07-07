import java.util.Scanner;
public class Loops {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        //print number up to a number entered
        int limit;
        System.out.print("Enter max-limit for counting: ");
        limit = in.nextInt();

        /*
        for(int i=1; i<=limit; i++)
            System.out.println(i);
        */

        /*
        int j=1;
        while(j<=limit){
            System.out.println(j);
            j++;
        }
        */

        /*
        Usually we use while() loop when we don't know how many times the loop is gonna
        run, but if we know exactly how many iterations are gonna be there, then we prefer for() loop.

        In do while() the loop will always execute at least once.
         */

        int k=1;
        do{
            System.out.println(k);
            k++;
        }while(k<=limit);
        System.out.println("Finished.");
    }
}
