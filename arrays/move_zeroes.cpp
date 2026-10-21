// Problem: Move Zeroes
// Platform: LeetCode
// Link: https://leetcode.com/problems/move-zeroes/
// Time Complexity: O(n) - We iterate through the array exactly once.
// Space Complexity: O(1) - In-place modification using the write pointer (k).


class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int k = 0;
        for(int i = 0; i < nums.size(); i++)
        {
           if(nums[i] != 0)
           {
             nums[k] = nums[i];
              k++;
           }
        }
        while(k < nums.size())
        {
            nums[k] = 0;
            k++;
        }

    }
};