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
         // two pass approach: first we will calculate the left products and store them in ans array, then we will calculate the right products and multiply them with the left products in ans array.
        int left_product = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = left_product;
            left_product *= nums[i];
        }
        // aab hamari ans me sare left products store ho gaye hai. Ab hume right products ko bhi multiply karna hai.
        //  rigth product ko calculate karne ke liye hum reverse me iterate karenge aur ans[i] me right_product ko multiply karenge.
        int right_product = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= right_product;
            right_product *= nums[i];
        }
        
        return ans;
    }
};