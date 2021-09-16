class Solution {
public:
    char findTheDifference(string s, string t) {
       int map[26]={0};
        for (int loopVar =0;loopVar<s.size();loopVar++){
            map[s[loopVar]-'a']++;
        }
        for (int loopVar =0;loopVar<t.size();loopVar++){
            map[t[loopVar]-'a']--;
        }
        for (int loopVar =0;loopVar<26;loopVar++){
            if (map[loopVar]==-1)return (char)(loopVar+'a');
        }
        return ' ';
    }
};