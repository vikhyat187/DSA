class Solution {
    public boolean validateStackSequences(int[] pushed, int[] popped) {
        int N = pushed.length;
        Stack<Integer> stk = new Stack<>();
        
        int j = 0;
        
        for (int i: pushed){
            stk.push(i);
            
            while(!stk.isEmpty() && j < N && stk.peek() == popped[j]){
                stk.pop();
                j++;
            }
        }
    return j == N;     
        
    }
}