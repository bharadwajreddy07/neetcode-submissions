class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string k;
        int maxi=0;
        for(int i=0;i<s.size();i++)
        {
            unordered_set<char>fq;
            for(int j=i;j<s.size();j++)
            {
                if(fq.find(s[j])!=fq.end())
                break;
                fq.insert(s[j]);
            }
            maxi=max(maxi,(int)fq.size());
        }
        return maxi;
    }
};
