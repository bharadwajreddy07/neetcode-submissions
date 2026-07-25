class Solution {
public:
    int func(int n)
    {
        int s=0;
        while(n>0)
        {
           int k=n%10;
            s+=k*k;
            n=n/10;
        }
        return s;
    }
    bool isHappy(int n) {
        unordered_set<int>fq;
        while(fq.find(n)==fq.end())
        {
            fq.insert(n);
            n=func(n);
            if(n==1)
            return 1;
        }
    return 0;
    }
};
