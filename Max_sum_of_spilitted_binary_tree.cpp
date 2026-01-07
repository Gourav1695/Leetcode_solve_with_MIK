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
    long long  maxP    = 0;
    int SUM     = INT_MIN;
    int totalSum(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int leftSum = totalSum(root->left);
        int rightSum = totalSum(root->right);

        SUM = root->val + leftSum+ rightSum;
        return SUM;
    }
    int find(TreeNode * root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int leftSum = find(root->left);
        int rightSum = find(root->right);
        long long  subTreeSum = root->val + leftSum + rightSum;

        long long  remainingTreeSum = SUM - subTreeSum;
        maxP = max(maxP, (subTreeSum*remainingTreeSum));

        return subTreeSum;

    }

    int maxProduct(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        maxP = 0;
        SUM = totalSum(root);
        cout<<"SUM="<<SUM<<endl;
        find(root);
        cout<<maxP<<endl;
        return maxP%1000000007;
    }
};

// tc -->O(n)
// sc -->O(H)
