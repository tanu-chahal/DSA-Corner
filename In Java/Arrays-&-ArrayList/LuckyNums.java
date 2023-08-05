import java.util.ArrayList;

public class LuckyNums {
    public static void main(String[] args) {
        int[][] matrix = {{3,7,8},{9,11,13},{15,16,17}};
        ArrayList<Integer> luckyNums = new ArrayList();
        boolean lucky;
        for(int i = 0; i<matrix.length; i++){
            for(int j=0; j<matrix[i].length; j++){
                lucky = true;
                for(int k=0; k<matrix[i].length; k++){
                    if(matrix[i][j] > matrix[i][k]){
                        lucky = false;
                        break;
                    }
                }
                for(int k=0; k<matrix.length; k++){
                    if(matrix[i][j] < matrix[k][j]){
                        lucky = false;
                        break;
                    }
                }
                if(lucky){
                    luckyNums.add(matrix[i][j]);
                    break;
                }
            }
        }
        System.out.println(luckyNums);
    }
}
