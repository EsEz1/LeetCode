class Solution {
public:
    int arraySign(vector<int>& nums) {
        int pos=0,neg=0;
        for(auto &i:nums)
        {
            if(i==0)
                return 0;
            else
            {
                if(i<0)
                    neg++;
            }
        }
        if(neg&1)
            return -1;
        return 1;
    }
};