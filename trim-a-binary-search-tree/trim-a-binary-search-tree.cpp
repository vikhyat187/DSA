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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if (root == NULL)return NULL;
        
        //check if the value of root is not in limit
        if (root->val < low || root->val > high){
            //replace the root value if root->val < low then assign right value to root else left value
            root = (root->val<low)?root->right:root->left;
            root = trimBST(root,low,high);
        }
        else {
            //root is in the range
            root->left = trimBST(root->left,low,high);
            root->right = trimBST(root->right,low,high);
        }
        return root;
    }
};