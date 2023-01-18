class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int sz=nums.size(),mx=0;
      for(int i=0;i<sz-2;i++)
      {
          if(nums[i]+nums[i+1]>nums[i+2])
          {
              mx=fmax(mx,nums[i]+nums[i+1]+nums[i+2]);
          }
      }
      return mx;
    }
};