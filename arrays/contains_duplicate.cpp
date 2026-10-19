// Problem: Contains Duplicate
// Platform: LeetCode
// Link: https://leetcode.com/problems/contains-duplicate/
// Time Complexity: O(n) - Single pass, O(1) average lookup for unordered_set
// Space Complexity: O(n) - Storing elements in the set
// Approach: Used unordered_set to track seen numbers. If a number is already in the set, it's a duplicate.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_set<int> seen;

        for(int i = 0; i < nums.size();  i++)
        {
            if(seen.find(nums[i]) != seen.end())
            {
                return true;
            }
            seen.insert(nums[i]);
        }
        return false;
    }
};