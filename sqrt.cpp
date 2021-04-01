// find the max val of k^2<=x 

int mySqrt(int n){
    int low =0,high= n-1;
    int mid,square;
    while(low <= high){
        mid = low + (high - low)/2;
        square = mid * mid;
        if (square <= n){
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return low

}