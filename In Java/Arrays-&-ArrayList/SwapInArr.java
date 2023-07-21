import java.util.Arrays;

public class SwapInArr {
    public static void main(String[] args) {
        int[] arr = {11, 12, 13, 14, 15, 16};
        System.out.println(Arrays.toString(arr));
        reverse(arr);
        System.out.println("Reversed: "+Arrays.toString(arr));
        swap(arr, 2, 4);
        System.out.println("After swapping indices 2 & 4:");
        System.out.println(Arrays.toString(arr));
    }

    static void reverse(int[] arr){
        if(arr.length==0){
            System.out.println("Array is empty. Can't reverse.");
            return;
        }
        for(int i=0; i<arr.length/2; i++){
            swap(arr, i, (arr.length-(i+1) ));
        }
    }
    static void swap(int[] arr, int ind1, int ind2){
        if(arr.length==0) {
            System.out.println("Array is empty. Can't swap.");
            return;
        }
        int temp = arr[ind1];
        arr[ind1] = arr[ind2];
        arr[ind2] = temp;
    }
}
