class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int i=0,j=n-1;
        int  res=0;
        while(i<j)
        {
            int maxi=(j-i)*min(heights[i],heights[j]);
            res=max(maxi,res);
            if(heights[i]<=heights[j])
            i++;
            else
            j--;
        }
        return res;
    }
};
