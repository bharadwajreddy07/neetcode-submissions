class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     sort(nums.begin(),nums.end());
     int n=nums.size();
     int i=0,j=n-1;
     while(i<j)
     {
        int s=nums[i]+nums[j];
        if(s>target)
        j--;
        else if(s<target)
        i++;
        else
        {
            return {i+1,j+1};
            i++;
            j--;
        }
     }
     return {};
    }
};
