import java.util.ArrayList;
import java.util.Scanner;

public class MultiDimArrList {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<ArrayList<Integer>> list = new ArrayList<>();

        //Initialization
        for(int i=0; i<3; i++){
            list.add(new ArrayList<>()); // adds three array lists
        }

        //Add or Input Elements
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                list.get(i).add(in.nextInt()); // looks like a 2-D array of size [3][3]
            }
        }

        System.out.println(list);
    }
}
