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
    string tree2str(TreeNode* root) {
        if(root==NULL){
            return "";
        }
        string result = to_string(root->val);
        string left = tree2str(root->left);
        string right = tree2str(root->right);

        if(root->right ==NULL && root->left ==NULL){
            return result;
        }
        if(root->right==NULL){
            return result + "(" + left + ")";
        } 
        if(root->left ==NULL){
            return result + "()"+ "("+ right +")";
        }
        return result + "("+left+")" + "("+right+")";

    }
};

// Time complexity is O(N) because each node is visited once.
// Space complexity is O(H) due to recursion stack, which becomes O(N) in worst case.
// Additionally, the output string takes O(N) space.
