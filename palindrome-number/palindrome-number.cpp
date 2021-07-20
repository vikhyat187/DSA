class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0){return false;}
        int temp=x,r;
        long long int d=0;
        while(x){
            r= x%10;
            d=d*10+r;
            x=x/10;
            
        }
        
        if (temp == d)return true;
        return false;
    }
};