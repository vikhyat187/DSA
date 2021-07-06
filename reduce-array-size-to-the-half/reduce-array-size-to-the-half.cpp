class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>map;
        int totalCount=0,temp,removedCount,no=0;
        for (int i=0;i<arr.size();i++){
            map[arr[i]]++;
            totalCount++;
        }
        priority_queue<int>pq;
       for (auto [num,freq]:map)pq.push(freq);
        for (int deleted{},ans=0;;pq.pop()){
            deleted+= pq.top();
            ans++;
            if (deleted>=arr.size()/2)return ans;
        }
        return -1;
    }
};