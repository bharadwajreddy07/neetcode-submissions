class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> c;
        vector<vector<int>> fq(n+1);
        for(int k:nums)
        {
            c[k]=1+c[k];
        }
        for(auto &p:c)
        {
            fq[p.second].push_back(p.first);
        }
        vector<int> res;
        for(int i=fq.size()-1;i>=0;i--)
        {
            for(int n:fq[i]){
                 res.push_back(n);
                 if(res.size()==k)
                 return res;
            }

        }
        return res;
    }
};
