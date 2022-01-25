class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int N = arr.size();
        int i=0;
        
        while(i+1 < N and arr[i] < arr[i+1]){
            i++;
        }
        if(i == 0 or i == N-1)return false;
        
        while(i+1 < N and arr[i] > arr[i+1]){
            i++;
        }
        return i== N-1;
    }
};


/*
[1,2,3,4,5,4,2,1,2]



*/