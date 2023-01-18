class Solution {
public:
    int sumOddLengthSubarrays(vector<int> &arr) {
        int n = arr.size();
        int arr[n+1];
        for (int i = 0; i < n; ++i) pre[i] +=pre[i-1];
        int res = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; i + j < n; j += 2) {
                res += pre[i + j + 1] - pre[i];
            }
        }
        return res;
    }
};