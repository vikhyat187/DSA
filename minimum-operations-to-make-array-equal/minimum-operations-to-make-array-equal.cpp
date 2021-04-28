class Solution {
public:
    int minOperations(int n) {
        int l = 1,count =0;
        while(l < n){
            count += n - l;
            l+=2;
        }
        return count;
    }
};