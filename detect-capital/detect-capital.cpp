class Solution {
public:
    bool detectCapitalUse(string word) {
       bool match1=true,match2=true,match3=true;
        int len=word.size();
        
        //case 1: all caps
        for (int i =0;i<len;i++){
            if(!isupper(word[i])){
                match1=false;
                break;
            }
        }
        if(match1)return true;
        
        //case 2: all small 
        
         for (int i =0;i<len;i++){
            if(!islower(word[i])){
                match2=false;
                break;
            }
        }
        if(match2)return true;
        
        
        //case 3: only first one caps
        if(!isupper(word[0])){
            match3=false;
        }
        if(match3){
            for (int i=1;i<len;i++){
                if(!islower(word[i])){
                    match3=false;
                    break;
                }
            }
        }
        if(match3)return true;
        
        
        return false;
        
        
        
    }
};