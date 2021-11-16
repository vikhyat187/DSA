class Solution {
public:
    int compress(vector<char>& chars) {
        int count=1;
        int i =0;
        string res="";
        for (;i<chars.size();i++){
            count=1;
            while(i<chars.size()-1 && chars[i]==chars[i+1]){
                count++;
                i++;
            }
            if(count==1)res+=chars[i];
            
            else res+=chars[i]+to_string(count);
            // cout<<count<<" ";
        }
        chars.resize(res.length());
        for (int i=0;i<res.length();i++){
            chars[i]=res[i];
        }
        return res.length();
    }
};