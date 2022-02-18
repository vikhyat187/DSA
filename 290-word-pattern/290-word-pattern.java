class Solution {
    public boolean wordPattern(String pattern, String s) {
        String words[] = s.split(" ");
        
        if(words.length != pattern.length())return false;
        
        
        Map<Character,String> map1= new HashMap<>();
        Map<String, Boolean> map2= new HashMap<>();
        
        for (int i =0;i < pattern.length() ; i++){
            Character ch = pattern.charAt(i);
            
            if(map1.containsKey(ch) == false){
                if(map2.containsKey(words[i]) == true){
                    return false;
                }
                else{
                    map1.put(ch,words[i]);
                    map2.put(words[i],true);
                }
                
            }
            else{
                String mapped = map1.get(ch);
                if(mapped.equals(words[i]) == false){
                    return false;
                }
            }
        }
        return true;
    }
}