// Problem: Missing Number
// Platform: LeetCode
// Link: https://leetcode.com/problems/missing-number/
// Approach: Math (Gauss's Formula)
// Time Complexity: O(N) - Single loop through the array.
// Space Complexity: O(1) - Only using a few variables.

class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int sum = 0, n = nums.size();
        
        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        
        return ((n * (n + 1)) / 2) - sum;
    }
};