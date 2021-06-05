class Solution {
public:
    int BinarySearch(int low,int high,int key){
    while(low <= high){
    int mid = low + (high - low)/2,res;
    res = mid;
    // cout<<res<<endl;
    if (res == key/res)return mid;
    else if (res  > key/mid)high = mid -1;
    else low = mid + 1;
    }
    return high;//dont return -1 as we have to give the integer truncated value if its not a perfect square
}
int FindRange(int n){
    int low = 1,high = 2;
    while(high < n/high){
        low = high;
        high = high * 2;
    }
    // cout<<low <<" " <<high<<endl;
    return BinarySearch(low,high,n);

}
    int mySqrt(int x) {
        return FindRange(x);
    }
};