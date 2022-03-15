class Solution {
    public String minRemoveToMakeValid(String s) {
        int n = s.length();
        StringBuilder sb = new StringBuilder(n);
        boolean[] remove = new boolean[n];
        
        
        // remove excessive ) 
        int open = 0;
        for (int i = 0;i < n; i++ ){
            if(s.charAt(i) == '(')
                open++;
            else if (s.charAt(i) == ')'){
                if(open > 0)
                    open--;
                else {
                    remove[i] = true;
                }
            }
        }
        
        // remove excessive (
        int close = 0;
        
        for (int i = n-1 ;i >= 0; i--){
            
            if(s.charAt(i) ==')')
                close++;
            
            else if(s.charAt(i) =='('){
                if(close > 0)
                    close--;
                else {
                    remove[i] = true;
                }
            }
        }
        
        for (int i =0; i< n; i++){
            if(!remove[i]) sb.append(s.charAt(i));
        }
        return sb.toString();
        
    }
}