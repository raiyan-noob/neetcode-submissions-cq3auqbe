class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int dif=0;
        for(int i=0;i<prices.size();i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                dif=prices[j]-prices[i];
                ans=max(ans,dif);
            }
        }
        return max(0,ans);
    }
};
