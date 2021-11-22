class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int leftarr[n],rightarr[n];
        leftarr[0]=height[0];
        for (int i=1;i<n;i++){
            leftarr[i]=max(leftarr[i-1],height[i]);
        }
        rightarr[n-1]=height[n-1];
        for (int i=n-2;i>=0;i--){
            rightarr[i]=max(rightarr[i+1],height[i]);
        }
        int watertrapped=0;
        for (int i=0;i<n;i++){
            watertrapped +=min(leftarr[i],rightarr[i])-height[i];
        }
        return watertrapped;
    }
};