import java.util.ArrayList;
public class KidWithMaxCandies {
    public static void main(String[] args) {
        int[] candies = {4,2,1,1,2};
        int extraCandies = 1;
        int max = Integer.MIN_VALUE;
        ArrayList<Boolean> result = new ArrayList();
        for(int i=0; i<candies.length; i++){
            if(candies[i]>max)
                max = candies[i];
        }

        for(int i=0; i<candies.length; i++){
            if(candies[i]+extraCandies >= max)
                result.add(true);
            else
                result.add(false);
        }
        System.out.println(result);
    }
}
