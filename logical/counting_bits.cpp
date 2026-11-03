// Problem: Counting Bits
// Platform: LeetCode
// Link: https://leetcode.com/problems/counting-bits/
// Approach: Dynamic Programming + Bit Manipulation
// Time Complexity: O(N) - Single pass through the array.
// Space Complexity: O(N) - To store the output array.

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0);
        
        for(int i = 1; i <= n; i++) {
            // ans[i >> 1] gets the count for i/2
            // (i & 1) adds 1 if 'i' is odd, 0 if even
            ans[i] = ans[i >> 1] + (i & 1);
        }
        
        return ans;
    }
};