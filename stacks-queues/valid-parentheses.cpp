// Problem: Valid Parentheses
// Platform: LeetCode
// Link: https://leetcode.com/problems/valid-parentheses/
// Time Complexity: O(n)
// Space Complexity: O(n)


#include <stack>

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) 
        {
            char c = s[i];
            if (c == '(' || c == '{' || c == '[') 
            {
                st.push(c);
            }
             else 
             {
                if (st.empty()) 
                {
                    return false;
                }

                if (c == ')' && st.top() != '(')
                    return false;
                if (c == ']' && st.top() != '[')
                    return false;
                if (c == '}' && st.top() != '{')
                    return false;
                    
                st.pop();
            }
        }
        return st.empty();
    }
};