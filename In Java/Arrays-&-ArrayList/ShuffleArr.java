import java.util.Arrays;

public class ShuffleArr {
    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4, 4, 3, 2};
        int n = nums.length/2;
        int[] ans = new int[nums.length];
        int i=0, j=0;
        while(j<n) {
            ans[i] = nums[j];
            ans[i + 1] = nums[n + j];
            i += 2;
            j++;
        }

        if((nums.length)%2!=0)
            ans[i]=nums[i];

        System.out.println(Arrays.toString(ans));
    }
}
