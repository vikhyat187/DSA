class Solution {
    public int maxArea(int h, int w, int[] horizontalCuts, int[] verticalCuts) {
        Arrays.sort(horizontalCuts);
        Arrays.sort(verticalCuts);
        
        int maxHeight, maxWeight;
        int hlength = horizontalCuts.length;
        int wlength = verticalCuts.length;
        maxHeight = Math.max(horizontalCuts[0] - 0, h - horizontalCuts[hlength - 1]);
        
        for (int i =0; i < hlength -1; i++){
            int diff = horizontalCuts[i + 1] - horizontalCuts[i];
            maxHeight = Math.max(diff,maxHeight);
        } 
        
        maxWeight = Math.max(verticalCuts[0] - 0, w - verticalCuts[wlength - 1]);
        
        for (int i =0; i < wlength -1; i++){
            int diff = verticalCuts[i + 1] - verticalCuts[i];
            maxWeight = Math.max(diff,maxWeight);
        }
        
        long area = 1L * maxHeight * maxWeight;
        return (int)(area % 1000000007);
    }
}