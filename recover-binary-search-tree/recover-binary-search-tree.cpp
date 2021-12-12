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
    int indx=-1;
    void Traversal(TreeNode *root,vector<int> & res){
        if(!root)return;
        if(root->left)Traversal(root->left,res);
        res.push_back(root->val);
        if(root->right)Traversal(root->right,res);
    }
     void SetTraversal(TreeNode *root,vector<int> & res){
        if(!root)return;
        
         if(root->left)SetTraversal(root->left,res);
         
        root->val=res[++indx];
         
        if(root->right)SetTraversal(root->right,res);
    }
    
    void recoverTree(TreeNode* root) {
        vector<int> res;
        Traversal(root,res);
        sort(res.begin(),res.end());
        SetTraversal(root,res);
    }
};