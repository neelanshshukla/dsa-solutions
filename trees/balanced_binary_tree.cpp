// Problem: Balanced Binary Tree
// Platform: LeetCode
// Link: https://leetcode.com/problems/balanced-binary-tree/
// Approach: Bottom-Up Recursion (Helper function returning -1 for unbalanced)
// Time Complexity: O(N) - We visit every node exactly once.
// Space Complexity: O(H) - Recursion stack space (H is the height of the tree).

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
    bool isBalanced(TreeNode* root) {
        // If the helper doesn't return -1, the tree is balanced
        return checkHeight(root) != -1;
    }

private:
    int checkHeight(TreeNode* node) {
        if (node == nullptr) return 0;
        
        int leftHeight = checkHeight(node->left);
        if (leftHeight == -1) return -1; // Left subtree is unbalanced
        
        int rightHeight = checkHeight(node->right);
        if (rightHeight == -1) return -1; // Right subtree is unbalanced
        
        // Check if the current node is balanced
        if (abs(leftHeight - rightHeight) > 1) {
            return -1; 
        }
        
        // Return the actual height (+1 for the current node)
        return max(leftHeight, rightHeight) + 1;
    }
};