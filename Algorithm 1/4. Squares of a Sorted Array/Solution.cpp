// The first solution
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(auto &i:nums)
        {
            i=i*i;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};



// An optimized solution
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int sz=nums.size();
        vector<int>ans(sz);
        int index=sz-1;
        int l=0;
        int r=sz-1;
        while(l<=r)
        {
            if(abs(nums[l])<abs(nums[r]))
            {
                ans[index--]=nums[r]*nums[r];
                r--;
            }
            else
            {
                ans[index--]=nums[l]*nums[l];
                l++;
            }
        }
        return ans;
    }
};