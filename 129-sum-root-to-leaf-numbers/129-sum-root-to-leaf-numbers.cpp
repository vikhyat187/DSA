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
    int sumNumbersHelper(TreeNode *root,int val){
        if (!root)return 0;
        
        val = val * 10 + root->val;
        // cout<<val<<" ";
        
        if(root->left == NULL and root->right == NULL)return val;
        
        return sumNumbersHelper(root->left,val) + sumNumbersHelper(root->right,val);
    }
    
    
    int sumNumbers(TreeNode* root) {
        return sumNumbersHelper(root,0);
    }
};