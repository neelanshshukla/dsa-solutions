// Problem: Lowest Common Ancestor of a Binary Search Tree
// Platform: LeetCode
// Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
// Approach: Recursive BST Property check
// Time Complexity: O(H) - Where H is the height of the tree. We only traverse down one path.
// Space Complexity: O(H) - Recursion stack space.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        // If both p and q are smaller than root, LCA is in the left subtree
        if(p->val < root->val && q->val < root->val) {
            return lowestCommonAncestor(root->left, p, q);
        }
        
        // If both p and q are greater than root, LCA is in the right subtree
        if(p->val > root->val && q->val > root->val) {
            return lowestCommonAncestor(root->right, p, q);
        }
        
        // If they split, or if one of them IS the root, then root is the LCA
        return root;
    }
};