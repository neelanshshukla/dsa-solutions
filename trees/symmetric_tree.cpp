// Problem: Symmetric Tree
// Platform: LeetCode
// Link: https://leetcode.com/problems/symmetric-tree/
// Time Complexity: O(N) - We visit every node exactly once.
// Space Complexity: O(H) - Recursion stack space.

class Solution {
public:
    bool isSymmetric(TreeNode* root) 
    {
        if(root == nullptr) return true;
        return isMirror(root -> left, root -> right);
    }

private:
    bool isMirror(TreeNode* t1, TreeNode* t2)
    {
       // If both are null, they match
       if(t1 == nullptr && t2 == nullptr) return true;
       // If only one is null, they don't match
       if(t1 == nullptr || t2 == nullptr) return false;
       // If values are different, they don't match
       if(t1 -> val != t2 -> val) return false;

       // The Mirror Logic: Left side matches Right side, and vice-versa
       return isMirror(t1 -> left, t2 -> right) && isMirror(t1 -> right, t2 -> left);
    }    
};