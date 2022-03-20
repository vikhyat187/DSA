class Solution {
   public int minDominoRotations(int[] tops, int[] bottoms) {
        int[] countA=new int[7],countB=new int[7],same=new int[7];
        for(int i=0;i<tops.length;i++){
            countA[tops[i]]++; //storing the no of occurence of that element in tops
            countB[bottoms[i]]++; //storing the no of occurence of that element in bottom
            if(tops[i]==bottoms[i]) same[tops[i]]++;  //storing the no of time element is same in both
        }
        for(int i=0;i<7;i++){
            if(countA[i]+countB[i]-same[i]==tops.length){ // to check after swaps we get the total element
                return Math.min(countA[i]-same[i],countB[i]-same[i]); //return minimum swaps to make the both array Same.
            }
        }
        return -1;
    }
}