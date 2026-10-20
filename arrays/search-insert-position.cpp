// Problem: Search Insert Position
// Platform: LeetCode
// Link: https://leetcode.com/problems/search-insert-position/
// Time Complexity: O(log n) - Standard binary search approach.
// Space Complexity: O(1) - No extra memory used.

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        long long mid;
        int left = 0;
        int right = nums.size() - 1;

        while(left <= right)
        {
            mid = (left + right) / 2;

            if(nums[mid] == target)
            {
                return mid;
            }
            if(nums[mid] > target)
            {
                right = mid - 1;
            }
            if(nums[mid] < target)
            {
                left = mid + 1;
            }
        }
        
        // When loop ends, left always points to the  index jaha pe target insert hoga
        return left;
    }
};