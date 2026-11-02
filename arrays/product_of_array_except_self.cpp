// Problem: Product of Array Except Self
// Platform: LeetCode
// Link: https://leetcode.com/problems/product-of-array-except-self/
// Approach: Prefix and Suffix Products (Two Passes)
// Time Complexity: O(N) - We iterate through the array twice.
// Space Complexity: O(1) - Excluding the output array, we only use a few variables.

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        
        int left_product = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = left_product;
            left_product *= nums[i];
        }
        
        int right_product = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= right_product;
            right_product *= nums[i];
        }
        
        return ans;
    }
};