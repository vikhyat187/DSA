class Solution {
    public char nextGreatestLetter(char[] arr, char target) {
        if (target> arr[arr.length-1])return arr[0];
        int low=0,high=arr.length,mid;
        while(low<high){
            mid = low + (high-low)/2;
            
            if (arr[mid] > target){
                high= mid;
            }
            else low = mid+1;
        }
        return arr[low%arr.length];
    }
}