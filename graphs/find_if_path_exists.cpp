// Problem: Find if Path Exists in Graph
// Platform: LeetCode
// Link: https://leetcode.com/problems/find-if-path-exists-in-graph/
// Approach: Breadth-First Search (BFS) using an Adjacency List
// Time Complexity: O(N + E) - We visit every node and edge at most once.
// Space Complexity: O(N + E) - To store the adjacency list, queue, and visited array.

#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        // 1. Build the Adjacency List (The Map)
        vector<vector<int>> adj(n);
        for(auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]); // Because it is an undirected graph
        }
        
        // 2. Setup the BFS tools
        queue<int> q;  // ek queue banao
        vector<bool> visited(n, false); // ek visited array banao, initially false for all nodes
        
        // Start at the source node
        q.push(source);
        visited[source] = true;
        
        // 3. Traverse the graph level by level
        while(!q.empty()) 
        {
            int curr = q.front();
            q.pop();
            
            // If we reached our target, we are done!
            if(curr == destination) return true;
            
            // Check all neighbors of the current node
            for(int neighbor : adj[curr]) 
             {
                if(!visited[neighbor]) 
                {
                    visited[neighbor] = true; // Mark as visited
                    q.push(neighbor);         // Add to the to-do list
                }
            }
        }
        // If the queue is empty, we explored everything and found nothing
        return false;
    }
};