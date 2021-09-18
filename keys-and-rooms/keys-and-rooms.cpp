class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        stack<int>st;
        st.push(0);
        unordered_set<int>set={0};
               
        while(!st.empty()){
            int ele=st.top();
            st.pop();
            for (int i: rooms[ele]){
                if (set.count(i)==0){
                    st.push(i);   
                    set.insert(i);
                    if (set.size()==rooms.size())return true;
                }
                
            }
        }
        return set.size()==rooms.size();
    }
};
