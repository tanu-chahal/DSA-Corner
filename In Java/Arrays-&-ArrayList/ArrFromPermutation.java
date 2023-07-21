import java.util.Arrays;

public class ArrFromPermutation {
    public static void main(String[] args) {
        int[] numbers = {5,0,1,2,3,4};
        int[] ans = new int[numbers.length];
        for(int i=0; i<numbers.length; i++) {
            ans[i] = numbers[numbers[i]];
        }
        System.out.println(Arrays.toString(ans));
    }
}
