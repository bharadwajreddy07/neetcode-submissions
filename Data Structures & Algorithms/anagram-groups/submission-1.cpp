class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string,vector<string>> mp;
      for(auto &s:strs)
      {
        vector<int>fq(26,0);
        for(char c:s)
        {
            fq[c-'a']++;
        }
        string k;
        for(int i=0;i<26;i++)
        {
            k+='#'+  to_string(fq[i]);
        }
        mp[k].push_back(s);
      }
      vector<vector<string>> res;
      for(auto &p:mp)
      {
        res.push_back(p.second);
      }
      return res;
    }
};
