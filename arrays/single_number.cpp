// Problem: Single Number
// Platform: LeetCode
// Link: https://leetcode.com/problems/single-number/
// Time Complexity: O(n) - Single pass through the array
// Space Complexity: O(1) - No extra memory used
// Approach: Used Bitwise XOR. x ^ x = 0 and x ^ 0 = x.

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int xup = 0;
        for(int i = 0; i < nums.size(); i++)
        { 
           xup ^= nums[i];  
        }
        return xup;
    }
};