// Problem: Path Sum
// Platform: LeetCode
// Link: https://leetcode.com/problems/path-sum/
// Time Complexity: O(N) - We visit every node exactly once.
// Space Complexity: O(H) - Recursion stack space.

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;
        
        // Subtract current node's value from the target
        targetSum -= root->val;
        
        // If it's a leaf node, check if we hit the exact target
        if (root->left == nullptr && root->right == nullptr) {
            return targetSum == 0;
        }
        
        // Check left and right subtrees
        return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
    }
};