class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int i =0;
        for (i =0;i<arr.length;i++){
            if (arr[i]>arr[i+1])break;
        }
        return i;
    }
}