// Problem: Validate Binary Search Tree
// Platform: LeetCode
// Link: https://leetcode.com/problems/validate-binary-search-tree/
// Approach: Recursive with Min/Max bounds
// Time Complexity: O(N) - We visit every node exactly once.
// Space Complexity: O(H) - Recursion stack space.

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
    bool isValidBST(TreeNode* root) 
    {
        // Start with the widest possible bounds
        return validate(root, LONG_MIN, LONG_MAX);
    }

private:
    bool validate(TreeNode* node, long long min_val, long long max_val) 
    {
        // Empty trees are valid
        if (node == nullptr) return true;
        
        // The current node must be strictly between the bounds
        if (node->val <= min_val || node->val >= max_val) return false;
        
        // Check left (update max) and right (update min)
        return validate(node->left, min_val, node->val) &&  validate(node->right, node->val, max_val);
    }
};