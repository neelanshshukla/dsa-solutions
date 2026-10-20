// Problem: Binary Search
// Platform: LeetCode
// Link: https://leetcode.com/problems/binary-search/
// Time Complexity: O(log n) - We cut the search space in half every time.
// Space Complexity: O(1) - Only using a few variables (left, right, mid).

class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        long long mid;
        int left = 0;
        int right = nums.size() - 1;

        while(left <= right)
        {
            mid = (left + right) / 2;

            if(nums[mid] == target)
                return mid;
                
            if(nums[mid] > target) 
            {
                right = mid - 1;
            }
            else if(nums[mid] < target) 
            {
                left = mid + 1; 
            }
        }
        return -1;
    }
};