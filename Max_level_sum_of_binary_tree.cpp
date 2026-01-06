/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int maxLevelSum(TreeNode* root) {

        // Stores the maximum sum encountered so far
        int maxSum = INT_MIN;

        // Stores the level number having maximum sum
        int result = 1;

        // Tracks the current level (root is level 1)
        int resultLevel = 1;

        // Queue used for BFS traversal
        queue<TreeNode*> que;
        que.push(root);

        // Perform level-order traversal
        while (!que.empty()) {

            // Number of nodes at current level
            int n = que.size();

            // Sum of values at current level
            int sum = 0;

            // Process all nodes at this level
            while (n--) {
                TreeNode* temp = que.front();
                que.pop();

                // Add current node value
                sum += temp->val;

                // Push children for next level
                if (temp->left) que.push(temp->left);
                if (temp->right) que.push(temp->right);
            }

            // Update maximum sum and corresponding level
            if (sum > maxSum) {
                maxSum = sum;
                result = resultLevel;
            }

            // Move to next level
            resultLevel++;
        }

        return result;
    }
};

/*
Time Complexity (TC):
O(N)
- Each node of the binary tree is visited exactly once.

Space Complexity (SC):
O(W)
- W is the maximum width of the binary tree.
- In the worst case (complete binary tree), W can be O(N),
  due to the queue used in BFS.
*/
