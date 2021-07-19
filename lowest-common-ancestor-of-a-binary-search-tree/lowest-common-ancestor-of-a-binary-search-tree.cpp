/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int pValue=p->val;
        int qValue = q->val;
        int parentValue = root->val;
        
        if (pValue > parentValue and qValue > parentValue){
            //both on right side
            return lowestCommonAncestor(root->right,p,q);
        }
        else if (pValue<parentValue and qValue<parentValue){
            //both on left side
            return lowestCommonAncestor(root->left,p,q);
        }
        else return root;//as both are one on each side so that node will be the LCA. \U0001f600
    }
};