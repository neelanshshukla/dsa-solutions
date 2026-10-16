// Problem: Remove Element
// Platform: LeetCode
// Link: https://leetcode.com/problems/remove-element/
// Time Complexity: O(n) - Single pass through the array
// Space Complexity: O(1) - In-place modification, no extra space used
// Note: Used the Two-Pointer technique (read pointer `i`, write pointer `k`)

class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int k = 0;
        for(int i = 0; i < nums.size(); i++)
        {
           if(nums[i] != val)
           {
              nums[k] = nums[i];
              k += 1;
           }
        }

        return k;
    }
};