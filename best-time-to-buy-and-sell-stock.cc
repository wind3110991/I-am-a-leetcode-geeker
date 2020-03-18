class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0)
            return 0;

        int min = prices[0];
        int max = 0;

        for (int i = 0 ; i < prices.size(); i++)
        {
            max = max > prices[i] - min ? max : prices[i] - min;
            min = min < prices[i]? min : prices[i];
        }

        return max;
    }

    /* O(n^2)
    https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock/solution/dp-dong-tai-gui-hua-kao-cha-ti-by-windyoung/
    
    int maxProfitOld(vector<int>& prices) {
        if (prices.size() == 0)
            return 0;

        int profit = 0;

        for (int i = 0 ; i < prices.size(); i++)
        {
            for (int j = i+1 ; j < prices.size() ; j++)
            {
                if (prices[j] - prices[i] > 0 && prices[j] - prices[i] > profit)
                {
                    profit = prices[j] - prices[i];
                }
            }
        }

        return profit;
    }
    */
};
