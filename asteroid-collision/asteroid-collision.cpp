class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>stk;
        for (auto  a:asteroids){
            
            while(stk.size()>0 and a<0 and stk.back()>0){
                int diff=a+stk.back();
                if(diff==0){
                    stk.pop_back();
                    a=0;
                    
                }
                else if (diff<0){
                    //new ele is powerful
                    stk.pop_back();
                    
                }
                else {
                    a = 0;//new ele is destroyed
                }
            }
            if(a){stk.push_back(a);}
        }
        return stk;
    }
};