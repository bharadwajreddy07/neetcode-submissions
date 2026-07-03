class Solution {
    void func(int i,int n,vector<int> &nums,vector<int> &res,vector<vector<int>>&ans)
    {
        if(i==n)
        {
            ans.push_back(res);
            return;
        }
        func(i+1,n,nums,res,ans);
        res.push_back(nums[i]);
        func(i+1,n,nums,res,ans);
        res.pop_back();
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
         vector<int> res;
         int n=nums.size();
         func(0,n,nums,res,ans);
         return ans; 
    }
};
