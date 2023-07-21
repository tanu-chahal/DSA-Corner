public class Multidimensional {
    public static void main(String[] args) {
        /*
        SYNTAX OF 2-D ARRAY =
        datatype[][] arrayName = new datatype[noOfRows][noOfColumns]; - noOfRows is mandatory to fill, while noOfColumns isn't

        int[][] arr = { {1,2,3},
                        {4,5},
                        {7,8,9,10}
                       };

        int[][] arr = new int[3][]; //no. of cols is optional to give here

        - Size of individual row doesn't matter. Rows can have variable no.of columns if it's not mentioned in declaration.
        - In 2D array arr.length gives no. of rows.

        INPUT
        int[][] arr= new int[3][2];
        for(int row=0; row<arr.length; row++){
               for(int col=0; col<arr[row].length; col++){
                        arr[row][col] = in.nextInt();
                }
        }

        OUTPUT
        int[][] arr = { {1,2,3},
                        {4,5},
                        {7,8,9,10}
                       };
        for(int row=0; row<arr.length; row++){ //first method
               for(int col=0; col<arr[row].length; col++){
                       System.out.print(arr[row][col] + " ");
               }
               System.out.println();
        }

        for(int row=0; row<arr.length; row++){ //second method
               System.out.println(Arrays.toString(arr[row]));
        }
        for(int[] a:arr){ //second method's another way
               System.out.println(Arrays.toString(a));
        }
        */
    }
}

