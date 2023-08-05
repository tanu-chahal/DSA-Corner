import java.util.Arrays;

public class NoOfSmallElems {
    public static void main(String[] args) {
        int[] nums = new int[]{6, 5, 4, 8};
        int[] ans = new int[nums.length];
        int smallNum = 0;
        for(int i=0; i<nums.length; i++){
            smallNum =0;
            for(int j=0; j<nums.length; j++){
                if(nums[j]<nums[i]){
                    smallNum++;
                }
            }
            ans[i] = smallNum;
        }
        System.out.println(Arrays.toString(ans));
    }
}
