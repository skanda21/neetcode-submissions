class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int sum, maxSell;
        int l = 0, r = prices.size() - 1;
        while (l <= r) {
            sum = 0;
            maxSell = 0;
            for (int i = l + 1; i <= r; i++) {
                if (prices[i] > prices[l] && prices[i] >= maxSell) 
                    maxSell = prices[i];
            }
            sum += maxSell - prices[l];
            maxProfit = max(maxProfit, sum);

            l++;
        }

        return (maxProfit < 0 ? 0 : maxProfit);
    }
};
