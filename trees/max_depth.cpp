// Problem: Maximum Depth of Binary Tree
// Platform: LeetCode
// Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/
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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};