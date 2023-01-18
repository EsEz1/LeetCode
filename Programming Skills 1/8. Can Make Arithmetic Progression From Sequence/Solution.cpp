class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int z=arr[1]-arr[0];
        int sz=arr.size();
        for(int i=2;i<sz;i++)
        {
            if(z!=(arr[i]-arr[i-1]))
            {
                return false;
            }
        }
        return true;
    }
};