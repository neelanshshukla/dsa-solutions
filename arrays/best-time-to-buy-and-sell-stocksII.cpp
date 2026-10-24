// Problem: Best Time to Buy and Sell Stock II
// Platform: LeetCode
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
// Approach: Greedy Algorithm (capturing every "uphill" price change)
// Time Complexity: O(n) - Single pass through the prices array.
// Space Complexity: O(1) - Only using a single variable for profit.

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int profit = 0;
        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] > prices[i - 1]) // the price uphill condition
            {
                profit += prices[i] - prices[i - 1];
            }
        }
        return profit;
    }
};