// Problem: Majority Element
// Platform: LeetCode
// Link: https://leetcode.com/problems/majority-element/
// Approach: Boyer-Moore Voting Algorithm
// Time Complexity: O(n) - Single pass through the array.
// Space Complexity: O(1) - Only using two variables (count and candidate).

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
       int n = nums.size();
       int count = 0;
       int candidate = 0;

       for(int i = 0; i < n; i++)
       {
           if(count == 0)
           {
             candidate = nums[i];
           }

           if(candidate != nums[i])
           {
             count--;
           }
           else
           {
             count++;
           }
       }    
       return candidate;   
    }
};