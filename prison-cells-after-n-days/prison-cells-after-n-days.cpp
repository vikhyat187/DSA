class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        vector<int>tmp(8);
        vector<vector<int>>seen;
        while(n--){
            for (int loop_var =1;loop_var<7;loop_var++){
                tmp[loop_var]=cells[loop_var-1]==cells[loop_var+1];
            }
            if(seen.size() && seen.front()==tmp)return seen[n%seen.size()];
            else seen.push_back(tmp);
            cells=tmp;
        }
        return cells;
    }
};