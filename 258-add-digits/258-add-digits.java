class Solution {
    
    public int sumfn(int num){
        int sum = 0;
        while(num > 0){
            sum+= num % 10;
            num /= 10;
        }
        return sum;
    }
    public int addDigits(int num) {
        int sum=0;
       while(num / 10 != 0){
           sum = sumfn(num);
           num = sum;
       }
        return num;
    }
}