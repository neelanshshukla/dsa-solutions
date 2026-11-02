// Problem: Pascal's Triangle
// Platform: LeetCode
// Link: https://leetcode.com/problems/pascals-triangle/
// Approach: 2D Array (Nested Loops)
// Time Complexity: O(N^2) - We generate N rows, with a total of N(N+1)/2 elements.
// Space Complexity: O(N^2) - To store the output triangle.

#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        
        // Outer loop: Build each row
        for (int i = 0; i < numRows; i++) {
            // Create a row with size 'i + 1', initialized to 1s
            vector<int> row(i + 1, 1);
            
            // Inner loop: Calculate the middle elements
            // We start at 1 and go up to i - 1 because the edges are already 1
            for (int j = 1; j < i; j++) {
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            
            // Add the completed row to the triangle
            triangle.push_back(row);
        }
        
        return triangle;
    }
};
