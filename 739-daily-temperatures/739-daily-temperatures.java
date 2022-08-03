class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        int len = temperatures.length;
        int[] res = new int[len];
        Stack<Integer> stk = new Stack<Integer>();
        
        stk.push(len - 1);
        for (int i = len - 1; i >= 0; i--){
            while(!stk.isEmpty() && temperatures[i] >= temperatures[stk.peek()]){
                stk.pop();
            }
            if(!stk.isEmpty())
                res[i] = stk.peek() - i;
           
            stk.push(i);
        }
        return res;
    }
}