class Solution {
public:
    int check(vector<int>&a,int k)
    {
        int ans=0;
        for(int i=0;i<a.size();i++)
        {
            ans+=(a[i]+k-1)/k;
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int i=1;
        int j=*max_element(piles.begin(),piles.end());
        int res=INT_MAX;
        while(i<=j)
        {
            int mid=(i+j)/2;
            int ans=check(piles,mid);
            if(ans<=h)
            {
            j=mid-1;
            }else 
            i=mid+1;
        }
        return i;
    }
};
