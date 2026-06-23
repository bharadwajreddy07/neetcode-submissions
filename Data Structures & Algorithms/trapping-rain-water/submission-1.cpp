class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n==0)
        return 0;
        int i=0,j=n-1,res=0;
        int left=height[i];
        int right=height[j];
        while(i<j)
        {
            if(height[i]<height[j])
            {
                i++;
                left=max(left,height[i]);
                res+=left-height[i];
            }
            else
            {
                j--;
                right=max(right,height[j]);
                res+=right-height[j];
            }
        }
        return res;
    }
};
