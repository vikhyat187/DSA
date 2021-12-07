class Solution {
public:
    string addStrings(string num1, string num2) {
        int indx1=num1.size()-1,indx2=num2.size()-1,carry=0;
        string ans="";
        while(indx1>=0 || indx2>=0 || carry >0){
            if(indx1>=0){
                carry +=num1[indx1]-'0';
                indx1--;
            }   
            if(indx2>=0){
                carry +=num2[indx2]-'0';
                indx2--;
            }
            ans = char(carry %10+'0') + ans;
            carry =carry/10;
        }
        return ans;
    }
    
};