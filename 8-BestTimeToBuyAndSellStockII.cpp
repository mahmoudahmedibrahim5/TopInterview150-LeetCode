class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        int n = prices.size();
        int currentPrice = -1;
        for(int i = 0; i < n - 1; i++)
        {
            if(currentPrice != -1) // Wait to sell
            {
                if(prices[i + 1] < prices[i]){
                    result += (prices[i] - currentPrice);
                    currentPrice = -1;
                }
            }
            else // Wait to buy
            {
                if(prices[i + 1] > prices[i])
                    currentPrice = prices[i];
            }
        }
        if(currentPrice != -1)
            result += (prices[n - 1] - currentPrice);
        
        return result;
    }
};