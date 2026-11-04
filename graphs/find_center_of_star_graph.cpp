// Problem: Find Center of Star Graph
// Platform: LeetCode
// Link: https://leetcode.com/problems/find-center-of-star-graph/
// Approach: Check the intersection of the first two edges
// Time Complexity: O(1) - We only check 2 edges, regardless of the graph size
// Space Complexity: O(1) - No extra space used

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        // Get the nodes from the first edge
        int u1 = edges[0][0];
        int v1 = edges[0][1];
        
        // Get the nodes from the second edge
        int u2 = edges[1][0];
        int v2 = edges[1][1];
        
        // If u1 is in the second edge, it is the center
        if (u1 == u2 || u1 == v2) {
            return u1;
        }
        
        // Otherwise, v1 must be the center
        return v1;
    }
};