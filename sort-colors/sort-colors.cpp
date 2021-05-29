class Solution {
public:
    void sortColors(vector<int>& a) {
     int l=0,m=0,h= a.size()-1;
        while(m<=h){
            int x= a[m];
            if (x ==0 ){
                swap (a[l],a[m]);
                l++;
                m++;
            }
            else if (x ==1 ){
                m++;
                
            }
            else if (x == 2){
                swap(a[m],a[h]);
                h--;
            }
        }
        
    }
};