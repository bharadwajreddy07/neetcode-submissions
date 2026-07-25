class Solution {
public:
    int func(int i,int n,vector<int>&cost,vector<int>&dp)
    {
        if(i>=n)
        return 0;
        if(dp[i]!=-1)
        return dp[i];
       return dp[i]=cost[i]+min(func(i+1,n,cost,dp),func(i+2,n,cost,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n,-1);
        return min(func(0,n,cost,dp),func(1,n,cost,dp));
    }
};
