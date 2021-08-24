class Solution {
    public int findPeakElement(int[] arr) {
             int low =0,high=arr.length-1;
        while(low < high){
            int mid = low + (high - low)/2;
          if (arr[mid] > arr[mid+1]){
              //we are on right side 
              high = mid;
          }
            else low = mid+1;
        }
        return low;
    }
}