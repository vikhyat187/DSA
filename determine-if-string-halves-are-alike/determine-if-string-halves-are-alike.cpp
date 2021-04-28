class Solution {
public:
    int countVowels(string s,int start,int end){
        int count =0;
        for (int i=start;i<=end;i++){
            cout<<s[i]<<" ";
            if (s[i] == 'a' ||s[i] == 'e' ||s[i] == 'u' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'O' ||s[i] == 'I' ||s[i] == 'A' ||s[i] == 'E' ||s[i] == 'U'){
                count++;
            }
        }
        cout<<count<<endl;
        return count;
    }
    bool halvesAreAlike(string s) {
        int start=0,mid,end=s.length()-1;
        mid = (start + (end - start)/2);
        int first_count = countVowels(s,start,mid);
        cout<<endl;
        
        int second_count = countVowels(s,mid+1,end);
        if (first_count == second_count)return true;
        return false;
    }
};