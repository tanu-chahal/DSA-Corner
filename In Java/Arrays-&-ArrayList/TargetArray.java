import java.util.ArrayList;
import java.util.Arrays;

public class TargetArray {
    public static void main(String[] args) {
        int[] nums = new int[]{0,1,2,3,4};
        int[] index = new int[]{0,1,2,2,1};
        ArrayList<Integer> list = new ArrayList();

        int l = nums.length;
        int[] ans = new int[l];
        for (int i = 0; i < l; i++) {
            list.add(index[i], nums[i]);
        }
        for (int i = 0; i < l; i++) {
            ans[i] = list.get(i);
        }
        System.out.println(Arrays.toString(ans));
    }
}
