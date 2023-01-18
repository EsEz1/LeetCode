class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx=INT_MIN;
        for(auto i:accounts)
        {
            int sum=0;
            for(auto j:i)
            {
                sum+=j;
            }
            mx=fmax(mx,sum);
        }
        return mx;
    }
};