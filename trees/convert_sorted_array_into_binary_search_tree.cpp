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
    TreeNode* buildBST(vector<int>& nums, int left, int right)
    {
        if(left > right) return nullptr; // matlab array khatam hogaya

        long long mid = (left + right) / 2;  // long long use kara (integer overflow)

        TreeNode* root = new TreeNode(nums[mid]); // middle element ko root node banao

        root -> left = buildBST(nums, left, mid - 1); // recursively left subtree banao

        root -> right = buildBST(nums, mid + 1, right); // recusively rght subtree banao

        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        return buildBST(nums, 0, nums.size() - 1);
    }
};