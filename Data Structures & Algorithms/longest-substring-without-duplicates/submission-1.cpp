class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int maxi=0;
        unordered_set<char> ch;
        for(int r=0;r<s.size();r++)
        {
            while(ch.find(s[r])!=ch.end())
            {
                ch.erase(s[l]);
                l++;
            }
            ch.insert(s[r]);
            maxi=max(maxi,r-l+1);
        }
        return maxi;
    }
};
