// Problem: Squares of a Sorted Array
// Platform: LeetCode
// Link: https://leetcode.com/problems/squares-of-a-sorted-array/
// Approach: Square all elements in-place, then use std::sort to order them.
// Time Complexity: O(n log n) - Due to the sorting algorithm (std::sort).
// Space Complexity: O(1) - In-place modification (ignoring the small recursion stack space used by sort).

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        for(int i = 0; i < nums.size(); i++)
        {
            nums[i] = nums[i] * nums[i];
        }

        sort(nums.begin(), nums.end());

        return nums;
    }
};