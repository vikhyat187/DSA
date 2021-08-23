class Solution {
    public int maxArea(int[] height) {
        int low=0,high=height.length-1;
        int water=0;
        while(low!=high){
            // water = Math.max(water,Math.min(low,high)* (high-low));
            int ans=(high-low)*Math.min(height[high],height[low]);
            if (water<ans)water=ans;
           
            if (height[low] < height[high])low++;
            else high--;
        }
        return water;
    }
}