class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int s=nums1.size();
        int sz=nums2.size();
        vector<int>q;
        map<int,int>fre;
        for(int i=0;i<sz;i++)
        {
            fre[nums2[i]]=i;
        }
        for(int i=0;i<s;i++)
        {
            bool check=false;
            for(int j=fre[nums1[i]]+1;j<sz;j++)
            {
                if(nums2[j]>nums1[i])
                {
                    check=true;
                    q.push_back(nums2[j]);
                    break;
                }
            }
            if(!check)
            {
                q.push_back(-1);
            }
        }
        return q;

    }
};