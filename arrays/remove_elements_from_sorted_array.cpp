// Problem: Remove Duplicates from Sorted Array
// Platform: LeetCode
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Time Complexity: O(n) - Single pass using two pointers
// Space Complexity: O(1) - In-place modification


class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int k = 0;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[k] != nums[i])
            {
               k++;
               nums[k] = nums[i];
            }
        }
        
        return k + 1;
    }
};