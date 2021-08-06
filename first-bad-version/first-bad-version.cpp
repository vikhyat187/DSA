// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1,mid,high=n;
        while(low<high){
            mid=low+ (high-low)/2;
         
            if (isBadVersion(mid)) high= mid; //mid is bad check on LHS
            else low= mid+1;//mid is good check on rhs
        }
        return low;
    }
};