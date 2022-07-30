class Solution {
    public int totalFruit(int[] fruits) {
        int[] map = new int[40001];
        
        int left =0, right =0, cnt = 0;
        int maxRes = 0;
        
        while(right < fruits.length){
            if(map[fruits[right]]++ == 0){
                cnt++;
            }
                while(cnt > 2){
                    if(--map[fruits[left]] == 0){
                        cnt--;
                    }
                     left++;
                }
                maxRes = Math.max(maxRes, right - left + 1);
            right++;
             
            
        }
        return maxRes;
    }
}