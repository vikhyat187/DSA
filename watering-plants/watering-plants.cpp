class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int size=plants.size(),ans=0,max_capacity=capacity;
        for (int i=0;i<size;i++){
            if(capacity<plants[i]){
                ans+=(i+i+1);
                capacity=max_capacity;
                capacity-=plants[i];
            }
            else{
                capacity-=plants[i];
                ans+=1;
            }
            cout<<capacity<<" "<<ans<<endl;
        }
        return ans;
    }
};



// 1 2 3 4 5 6  7 8 9 10   cap=10
// 9 7 4 0 5 4  3 2 1 0
// 1 1 1 1 9 11 13 15 17 19    