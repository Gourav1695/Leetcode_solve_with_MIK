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

    int height(TreeNode* root){
        // Base case
        if(!root){
            return 0;
        }
        int leftH = height(root->left);
        int rightH = height(root->right);

        return max(leftH,rightH)+1;
    }
    bool isBalanced(TreeNode* root) {
        // Base case
        if(root==NULL){
            return true;
        }

        int leftH  = height(root->left);
        int rightH = height(root->right);

        if(abs(leftH - rightH)>1){
            return false;
        }

        return isBalanced(root->left) && isBalanced(root->right);
    }
};

// Time Complexity is O(n²) in the worst case because height is recomputed for every node.
// Space Complexity is O(h) due to recursion stack, which is O(n) in the worst case.
