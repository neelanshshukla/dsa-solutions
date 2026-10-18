// Problem: Best Time to Buy and Sell Stock
// Platform: LeetCode
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Time Complexity: O(n) - Single pass through the array.
// Space Complexity: O(1) - Only tracking min_price and max_profit.


class Solution {
public:
    int maxProfit(vector<int>& prices)
    { 
      int max = 0;
      int min_price = prices[0];
      for(int i = 0; i < prices.size(); i++)
      {
        if(prices[i] < min_price)
        {
            min_price = prices[i];
        }

        else if((prices[i] - min_price) > max)
        {
            max = prices[i] - min_price;
        }
      }
      return max;
    }
};