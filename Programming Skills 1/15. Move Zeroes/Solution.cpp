class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s=nums.size();
        vector<int>ans;
        int counter=0;
        for(int i=0;i<s;i++)
        {
            if(nums[i]==0)
                counter++;
            else
                ans.push_back(nums[i]);
        }
        while(counter--)
        {
            ans.push_back(0);
        }

        for(int i=0;i<s;i++)
        {
            nums[i]=ans[i];
        }

    }
};