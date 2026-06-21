class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
     unordered_map<int,int>fq;
     for(int c:nums) 
     {
        fq[c]++;
     }
     for(auto &p:fq)
     {
        if(p.second>1)
        return true;
     }
     return false;
    }
};