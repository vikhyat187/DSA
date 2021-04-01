bool isValid(int n){
    bool validFound= false;

    while(n >0){
        if (n%10 ==  2)validFound = true;
        if (n%10 ==  5)validFound = true;
        if (n%10 ==  6)validFound = true;
        if (n%10 ==  9)validFound = true;
        if (n%10 ==  3)return false;
        if (n%10 ==  4)return false;
        if (n%10 ==  7)return false;
        n= n/10;
    }


}


int rotatedDigits(int N){
    int cnt=0;
    for (int i=1;i<= N;i++){
        if(isValid(i))cnt++;
    }
    return cnt;
}