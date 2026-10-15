// Problem: Longest Common Prefix
// Platform: LeetCode
// Link: https://leetcode.com/problems/longest-common-prefix/
// Time Complexity: O(N*M) -  N is the number of strings, M is length of the shortest string
// Space Complexity: O(1)


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        std::string same = "";
        for (int i = 0; i < strs[0].length(); i++) 
        {
            char c = strs[0][i];
            
            for (int j = 1; j < strs.size(); j++)
            {
                if (strs[j][i] != c) 
                {
                    return same; 
                }
            }
            same += c; 
        }
        return same;
    }
};