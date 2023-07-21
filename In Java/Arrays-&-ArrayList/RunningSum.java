import java.util.Arrays;

public class RunningSum {
    public static void main(String[] args) {
        int[] nums = {3,1,2,10,1};
        int[] sum = new int[nums.length];
        sum[0] = nums[0];
        for(int i=1; i<nums.length; i++){
            sum[i]= sum[i-1]+nums[i];
        }
        System.out.println(Arrays.toString(sum));
    }
}
