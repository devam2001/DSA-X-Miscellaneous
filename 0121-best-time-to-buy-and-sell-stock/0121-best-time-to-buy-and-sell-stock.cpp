class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0, sell = INT_MAX;
        for(int i=0; i<prices.size(); i++){
            sell = min(prices[i], sell);
            buy = max(prices[i] - sell, buy);
        }  
        return buy;
    }
};