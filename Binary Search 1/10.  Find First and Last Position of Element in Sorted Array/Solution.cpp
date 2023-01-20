class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto i=lower_bound(nums.begin(),nums.end(),target);
        auto v=upper_bound(nums.begin(),nums.end(),target);
        if(i==nums.end()||*i!=target)
        return {-1,-1};
        int first=i-nums.begin();
        int last=v-nums.begin()-1;
        return {first,last};
    }
};