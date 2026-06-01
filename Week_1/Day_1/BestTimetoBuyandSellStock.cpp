class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minimumPrice = prices[0];
        int maximumProfit = 0;

        for (int i = 1; i < prices.size(); i++) {

            if (prices[i] < minimumPrice) {
                minimumPrice = prices[i];
            }

            int currentProfit = prices[i] - minimumPrice;

            if (currentProfit > maximumProfit) {
                maximumProfit = currentProfit;
            }
        }

        return maximumProfit;
    }
};
