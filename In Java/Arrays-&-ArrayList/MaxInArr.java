import java.util.Arrays;

public class MaxInArr {
    public static void main(String[] args) {
        int[] arr = {5, 678, 89, 23, 999};
        System.out.println(Arrays.toString(arr));
        System.out.println("Maximum Element: " + max(arr));
    }
    static int max(int [] arr){
        if(arr.length==0)
            return -1;
        int maxE = Integer.MIN_VALUE;
        for(int i=0; i<arr.length; i++){
            if(arr[i]>maxE)
                maxE = arr[i];
        }
        return maxE;
    }
}
