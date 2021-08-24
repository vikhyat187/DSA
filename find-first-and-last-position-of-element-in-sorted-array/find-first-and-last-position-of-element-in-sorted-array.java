class Solution {
    public int[] searchRange(int[] arr, int target) {
         int []ans={-1,-1};
       //check for first and last occurance
       ans[0]=search(arr,target,true);
       ans[1]=search(arr,target,false);
        return ans;
    }
     int search(int []arr,int target,boolean findFirst){
        int low =0;
        int high= arr.length-1,ans=-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if (target<arr[mid]){
                high=mid-1;
            }
            else if (target > arr[mid])low = mid+1;
            else {
                ans = mid;
                if (findFirst){ high= mid-1;}
                else{ low = mid+1;}
            }
            
        }
        return ans;
    }
}