class Solution {
public:
    int reverse(int x) {
            int rem;
            int no=0;
            
            while(x){
                rem= x%10; x/=10;
                if(no > INT_MAX/10 or (no == INT_MAX and rem>7))return 0;//if no == INT_MAX*10 its overflow so check for INT_MAX/10
                if (no < INT_MIN/10 or (no == INT_MIN and rem < -8))return 0;
                no=no*10+rem;
               
            }
            return no;
    }
};