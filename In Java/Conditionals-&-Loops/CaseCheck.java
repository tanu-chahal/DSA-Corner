import java.util.Scanner;

public class CaseCheck {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        //To check case of an alphabet
        char ch;
        System.out.print("Input a alphabet to check its case: ");
        ch = in.next().trim().charAt(0);
        //trim() removes extra spaces before & after the word inputted
        //charAt() - gives the string's character at the asked index

        if(ch>= 'a' && ch<='z')
            System.out.println(ch + " is in lowercase.");
        else if (ch>='A' && ch<= 'Z')
            System.out.println(ch + " is in uppercase.");
        else
            System.out.println(ch + " isn't an alphabet.");
    }
}
