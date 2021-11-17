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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode *>stk;
        TreeNode *curr=root;
        int count=1;
        while(curr!=NULL || !stk.empty()){
            while(curr!=NULL){
                stk.push(curr);
                curr=curr->left;
            }
            curr=stk.top();
            if(count==k)return curr->val;
            stk.pop();
            count++;
            curr=curr->right;
        }
        return -1;
    }
};