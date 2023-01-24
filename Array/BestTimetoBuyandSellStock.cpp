class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0,profit=0;
        int mini=INT_MAX;

        for(int i=0;i<prices.size();i++){
            mini=min(prices[i],mini);
            profit=prices[i]-mini;
            ans=max(ans,profit);
        }
        return ans;
    }
};
