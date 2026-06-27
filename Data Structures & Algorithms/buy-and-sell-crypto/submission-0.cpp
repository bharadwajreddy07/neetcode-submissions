class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=1,maxp=0;
        while(r<prices.size())
        {
            if(prices[l]<prices[r])
            {
                int p=prices[r]-prices[l];
                maxp=max(p,maxp);
            }
            else
            {
                l=r;
            }
            r++;
        }
        return maxp;
    }
};
