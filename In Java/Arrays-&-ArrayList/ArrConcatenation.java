import java.util.Arrays;

public class ArrConcatenation {
    public static void main(String[] args) {
        int[] nums = {1,3,2,1};
        int[] ans = new int[nums.length*2];
        for(int i=0; i<nums.length; i++){
            ans[i] = nums[i];
            ans[nums.length +i]= nums[i];
        }
        System.out.println(Arrays.toString(ans));
    }
}
