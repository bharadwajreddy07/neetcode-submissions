class Solution {
public:
    void func(int oc,int cc,int n,string k,vector<string>&ans)
    {
         if(oc>n||cc>oc)
        return;
        if(oc==n&&cc==n)
        {
            ans.push_back(k);
            return;
        }
        func(oc+1,cc,n,k+'(',ans);
        func(oc,cc+1,n,k+')',ans);
    }
    vector<string> generateParenthesis(int n) {

vector<string> ans;
        func(0,0,n,"",ans);
        return ans;
    }
};
