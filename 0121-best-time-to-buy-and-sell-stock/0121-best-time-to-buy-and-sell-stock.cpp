class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int curr = 0;
        int min = prices[0];
        
        for (int i=0; i<prices.size(); ++i) {
            if (prices[i] < min)
                min = prices[i];
            
            curr = prices[i] - min;
            if (curr > maxProfit) {
                maxProfit = curr;
            }
        }
        
        return maxProfit;
    }
};