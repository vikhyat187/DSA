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
    int depth(TreeNode *root){
        if(root==NULL)return 0;
        int leftDepth = depth(root->left);
        int rightDepth = depth(root->right);
        
        if(leftDepth == -1 or rightDepth == -1 )return -1;
        if(abs(leftDepth - rightDepth) > 1 )return -1;
        
        return max(depth(root->left),depth(root->right)) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        return depth(root)!=-1;
    }
};