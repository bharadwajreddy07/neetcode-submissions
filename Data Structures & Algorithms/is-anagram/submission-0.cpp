class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.size()!=t.size())
      return false;
      unordered_map<char,int> fq1;
      unordered_map<char,int> fq2;
      for(int i=0;i<s.size();i++)
      {
       fq1[s[i]]++;
       fq2[t[i]]++;
      }
    return fq1==fq2;
    }
};
