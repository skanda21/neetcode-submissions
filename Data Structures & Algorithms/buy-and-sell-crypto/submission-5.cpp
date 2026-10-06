class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, r = prices.size() - 1;
        int minPrice = prices[0];

        for (int l = 1; l <= r; l++) {
            maxProfit = max(maxProfit, prices[l] - minPrice);
            minPrice = min(minPrice, prices[l]);
        }
        return maxProfit;
    }
};
