class Solution {
    void func(int i,int k,vector<int>& res,vector<int>& nums, vector<vector<int>> &ans)
    {
        if(k==0)
        {
            ans.push_back(res);
            return;
        }
        if(k<0||i==nums.size())
        {
            return;
        }
        func(i+1,k,res,nums,ans);
        res.push_back(nums[i]);
        func(i,k-nums[i],res,nums,ans);
        res.pop_back();
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> nas;
        vector<int> res;
        func(0,target,res,nums,nas);
        return nas;
    }
};
