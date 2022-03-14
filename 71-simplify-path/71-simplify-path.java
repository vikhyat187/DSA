class Solution {
    public String simplifyPath(String path) {
        
        String[] arr = path.split("/");
        Stack<String> stk = new Stack<>();
        StringBuilder res = new StringBuilder();
        
        for (int i = 0; i < arr.length; i++){
            
            if(!stk.isEmpty() && arr[i].equals(".."))
                stk.pop();
            
            else if(!arr[i].equals("") && !arr[i].equals(".") && !arr[i].equals(".."))
                stk.push(arr[i]);
        }
        
        if(stk.isEmpty())return "/";
        
        while(!stk.isEmpty()){
            res.insert(0,stk.pop()).insert(0,"/");
        }
        return res.toString();
        
    }
}