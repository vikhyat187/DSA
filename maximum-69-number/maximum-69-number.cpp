class Solution {
public:
    int maximum69Number (int num) {
        long long int pos6=1,maxPos6=0;
        int n=num;
        while(n>0){
            int digit = n%10;
            if (digit ==6 ){
                maxPos6= pos6;//just find the left most 6 and then to convert suppose 699 to 999
                // we add 300 3*maxPos6 that is the place value ones,tens,hundreds...
            }
            pos6*=10;
            n/=10;
        }
        return num+ 3*maxPos6;
    }
};