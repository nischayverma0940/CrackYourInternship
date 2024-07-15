class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minBuy = prices[0];
        for(int i = 1; i < prices.size(); i++){
            profit = max(prices[i] - minBuy, profit);
            if(prices[i] < minBuy) minBuy = prices[i];
        }
        return profit;
    }
};
//Leetcode 121
