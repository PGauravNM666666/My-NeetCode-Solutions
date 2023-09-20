class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX, madmax = 0;
        for(int i=0;i<prices.size();i++)
        {
            mini = min(mini, prices[i]);
            madmax = max(madmax, prices[i] - mini);
        }
        return madmax;
    }
};