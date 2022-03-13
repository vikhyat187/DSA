class Solution {
    public boolean isValid(String s) {
        Map <Character,Character> map = new HashMap<>();
        
        map.put('(',')');
        map.put('[',']');
        map.put('{','}');
        Stack<Character> stk = new Stack<>();
        
        for (int i=0; i<s.length(); i++){
            if(s.charAt(i) == '(' || s.charAt(i) =='{' || s.charAt(i) == '[')stk.push(s.charAt(i));
            else {
                if(stk.isEmpty()){
                    return false;
                }
                if(map.get(stk.pop()).equals(s.charAt(i)))continue;
                else return false;
            }
        }
        return stk.isEmpty();
    }
}