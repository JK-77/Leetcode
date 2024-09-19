// TC : O(N)
// SC : O(1)
class Solution { 
public:
    int maxProfit(vector<int>& prices) {

        int maxprofit = 0;
        int curr = prices[0];
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < curr) {
                curr = prices[i];
            }
            else {
                maxprofit = max(maxprofit, prices[i] - curr);
            }
        }
        return maxprofit;
    }
};
