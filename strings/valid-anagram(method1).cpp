// Problem: Valid Anagram
// Platform: LeetCode
// Link: https://leetcode.com/problems/valid-anagram/
// Approach: Frequency counting using an array of size 26
// Time Complexity: O(n) - We iterate through the strings once
// Space Complexity: O(1) - The array size is fixed at 26 (constant space)

class Solution {
public:
    bool isAnagram(string s, string t)
    {
        if(s.length() != t.length())
        {
            return false;
        }
        
        int count[26] = {0};
        
        for(int i = 0; i < s.length(); i++)
        {
            int val = s[i] - 'a';
            count[val] += 1;    
        }

        for(int i = 0; i < t.length(); i++)
        {
            int val = t[i] - 'a';
            count[val] -= 1;
        }

        for(int i = 0; i < 26; i++)
        {
            if(count[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};