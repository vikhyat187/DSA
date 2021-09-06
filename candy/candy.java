class Solution {
    public int candy(int[] ratings) {
        int candies[]=new int[ratings.length];
        int candiesReq=0;
        Arrays.fill(candies,1);
        for (int loop=1;loop<ratings.length;loop++){
            if (ratings[loop]>ratings[loop-1] && candies[loop]<=candies[loop-1]){
                candies[loop]=candies[loop-1]+1;
            }
        }
        for (int loop=ratings.length-2;loop>=0;loop--){
            if (ratings[loop]>ratings[loop+1] && candies[loop]<=candies[loop+1]){
                candies[loop]=candies[loop+1]+1;
            }
        }
        for (int loop=0;loop<candies.length;loop++){
            candiesReq+=candies[loop];
        }
        return candiesReq;
    }
}