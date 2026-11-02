// Problem: Subarray Sum Equals K
// Platform: LeetCode
// Link: https://leetcode.com/problems/subarray-sum-equals-k/
// Approach: Prefix Sum + Hash Map
// Time Complexity: O(N) - We iterate through the array exactly once.
// Space Complexity: O(N) - In the worst case, the Hash Map stores N distinct prefix sums.

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int, int> prefixSums;
        prefixSums[0] = 1; // Base case: A sum of 0 has been seen once
        
        int current_sum = 0;
        int count = 0;
        
        for (int i = 0; i < nums.size(); i++) 
        {
            current_sum += nums[i]; // Add current number to running total
            
            // Check if the required old sum exists in our map
            int required_old_sum = current_sum - k;
            
            if (prefixSums.find(required_old_sum) != prefixSums.end()) 
            {
                count += prefixSums[required_old_sum]; // Add the frequency
            }
            
            // Save the current sum to the map for future reference
            prefixSums[current_sum]++;
        }
        
        return count;
    }
};