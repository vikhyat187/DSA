class Solution {
public:
    double calculatePower(double x,int n){
        if(n==0){return 1;}
        double powerx=calculatePower(x,n/2);
        if(n%2==0)return powerx*powerx;
        else return x*powerx*powerx;
    }
    double myPow(double x, int n) {
        if(x==0){
            return 0;
        }
        if(n<0 )
            return 1/x*calculatePower(1/x,-(n+1));
        
        return calculatePower(x,n);
    }
};
// 3power 2
//     pow(3,2)
//     pow(3,1)*pow(3,1)
//     1         1