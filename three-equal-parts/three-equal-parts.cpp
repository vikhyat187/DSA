class Solution {
public:
    vector<int> threeEqualParts(vector<int>& arr) {
        int count=0,n= arr.size(),i;
        for ( i =0;i<n;i++){
            if (arr[i])count++;
        }
        if (count==0)return {0,n-1};
        if (count%3!=0){return {-1,-1};}   //as splitting not possible
        // finding the first part,second part and third part start
        
        int start,mid,end;
        for ( i=0;i<n;i++){
            if (arr[i])break;
        }
        start =i;//first occurance of 1
        int k= (count/3);
        int count1=0;
        for ( i=0;i<n;i++){
            if (arr[i]){
                count1++;
            }
            if (count1 == k+1){break;}
        }
        mid =i;
        count1=0;
        for ( i=0;i<n;i++){
            if (arr[i]){
                count1++;
            }
            if (count1 == 2*(k)+1){break;}
        }
        end =i;
        cout<<start<<" "<<mid<<" "<<end;
        while(end<n and arr[start] == arr[mid] and arr[mid] == arr[end]){
            start++;
            mid++;
            end++;
        }
        
        if (end == n)return {start-1,mid};
        return {-1,-1};
                        
    }
};