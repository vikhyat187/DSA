class Solution {
    public char findTheDifference(String s, String t) {
        Map<Character,Integer> map = new HashMap<>();
        char ans=' ';
        for (Character ch: s.toCharArray()){
            if(map.containsKey(ch) == false){
                map.put(ch,1);
            }
            else {
                int count= map.get(ch);
                map.put(ch,count + 1);
            }
        }
        for (Character ch: t.toCharArray()){
            if(map.containsKey(ch) == false){
                return ch;
            }
            else {
                int count= map.get(ch);
                if (count == 0)ans = ch;
                map.put(ch,count - 1);
            }
        }
        return ans;
    }
}