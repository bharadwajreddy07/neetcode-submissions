class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> fq;
        vector<int> res;
        vector<int> l;
        for(int c:nums)
        {
            fq[c]++;
        }
        vector<pair<int,int>>a;
        for(auto&p:fq)
        {
            a.push_back({p.second,p.first});
        }
        sort(a.rbegin(),a.rend());
        for(int i=0;i<k;i++)
        {
            res.push_back(a[i].second);
        }
        return res;
    }
};
