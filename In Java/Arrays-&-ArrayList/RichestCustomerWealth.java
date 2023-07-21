
public class RichestCustomerWealth {
    public static void main(String[] args) {
        int[][] accounts = {{2,8,7},{7,1,3},{1,9,5}};
        int maxWealth = Integer.MIN_VALUE;
        for(int i=0; i<accounts.length; i++){
            int sum = 0;
            for (int j=0; j<accounts[i].length; j++){
                sum = sum + accounts[i][j];
            }
            if(sum>maxWealth){
                maxWealth = sum;
            }
        }
        System.out.println(maxWealth);
    }
}
