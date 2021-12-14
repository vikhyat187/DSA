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
    
    void inorder(TreeNode *root,vector<int>&res){
        if(root==NULL)return;
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
    
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>res;
       
        inorder(root,res);
        int index=0,size=res.size();
        
      
        while(index < size and res[index] < low)index++;
        
        
        int sum=0;
        while(index < size and res[index] <= high){
            sum+=res[index];
            index++;
            cout<<sum<<" ";
        }
            
       
        return sum;
        
    }
};