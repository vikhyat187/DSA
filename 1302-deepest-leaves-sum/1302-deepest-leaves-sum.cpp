/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode *> q;

        if(!root)return 0;
        
        q.push(root);
        
        int sum=0;
        while(!q.empty()){
           
            sum=0;
            int size = q.size();
            
            while(size--){
                TreeNode *currNode = q.front();
                q.pop();
                
                sum+=currNode->val;
                
               
                if(currNode->left){
                    q.push(currNode->left);
                }
                if(currNode->right){
                    q.push(currNode->right);
                }
            }
        }
        return sum;
    }
};