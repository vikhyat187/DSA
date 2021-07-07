class Solution {
public:
    int min(int a,int b){return a<b?a:b;}
    string convert(string s, int numRows) {
        if (numRows == 1 or numRows == s.length()){
            return s;
        }
        // create a vector of min(numRows,s.length())
        vector<string>rows(min(numRows,s.length()));
        bool goingDown=false;
        int currentRow=0;
        
        for (char c:s){
            rows[currentRow] += c;//adding the char to the row 
            //updating the currentRow
            if (currentRow ==0 or currentRow == numRows - 1)goingDown = !goingDown;
            currentRow +=goingDown?1:-1;
        }
        
        string ret;
        for (string row: rows){
            ret += row;
        }
        return ret;
        
        
    }
};