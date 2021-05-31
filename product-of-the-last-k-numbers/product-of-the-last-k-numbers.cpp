class ProductOfNumbers {
public:
    vector<int>a;
    ProductOfNumbers() {
        a = {1};
    }
    
    void add(int num) {
        if (num)
            a.push_back(num*a.back());//The main motto of initialising vector by 1 is to avoid outofbound access.//so a is initialised to 1 for first element it is utilised
        else
            a={1};//resetting the vector due to encountering of 0
    }
    
    int getProduct(int k) {
        int n= a.size();

        return k<n?a[n-1]/a[n-k-1]:0;//if the value of k<n which means 0 is already encountered
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */