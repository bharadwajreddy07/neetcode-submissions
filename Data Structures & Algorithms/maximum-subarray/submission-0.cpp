class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0,maxi=INT_MIN;
        int n=nums.size();
        for(int c:nums)
        {
            s+=c;
        maxi=max(maxi,s);
            if(s<0)
            s=0;
        }
        return maxi;
    }
};
