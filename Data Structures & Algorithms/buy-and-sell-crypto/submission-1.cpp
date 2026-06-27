class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int mini=prices[0];
        for(int &s:prices)
        {
            maxp=max(maxp,s-mini);
            mini=min(mini,s);
        }
        return maxp;
    }
};
