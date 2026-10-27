// Problem: Same Tree
// Platform: LeetCode
// Link: https://leetcode.com/problems/same-tree/
// Approach: Recursive Depth-First Search (DFS)
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
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        // If both nodes are null, they match
        if (p == nullptr && q == nullptr) return true;
        
        // If only one is null, they don't match
        if (p == nullptr || q == nullptr) return false;
        
        // If values don't match, they aren't the same
        if (p->val != q->val) return false;
        
        // Recursively check the left children and right children
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};