class BrowserHistory {
    Stack<String> Forward = new Stack<String>();
    Stack<String> Backward = new Stack<String>();
    
    
    public BrowserHistory(String homepage) {
        Backward.push(homepage);
        Forward = new Stack<String>();
    }
    
    public void visit(String url) {
        Backward.push(url);
        Forward =new Stack<String>();
    }
    
    public String back(int steps) {
        while(steps > 0 && Backward.size() > 1){
            Forward.push(Backward.peek());
            Backward.pop();
            steps--;
        }
        return Backward.peek();
    }
    
    public String forward(int steps) {
        while(steps > 0 && Forward.size() > 0){
            Backward.push(Forward.peek());
            Forward.pop();
            steps--;
        }
        return Backward.peek();
    }
}

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory obj = new BrowserHistory(homepage);
 * obj.visit(url);
 * String param_2 = obj.back(steps);
 * String param_3 = obj.forward(steps);
 */