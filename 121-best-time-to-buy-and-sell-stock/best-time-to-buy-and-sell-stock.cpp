class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int buy=10001;
        for (int i=0;i<prices.size();i++)
        {
            if(prices[i]<buy)
            {
                buy=prices[i];
            }
            else if(prices[i]-buy>ans)
            {
                ans=prices[i]-buy;
            }
        }
        return ans;
    }
};

