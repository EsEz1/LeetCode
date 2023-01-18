class Solution {
public:
  int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d) {
 int result = 0;
    for (auto &i: arr1) {
        auto pointer = find_if(arr2.begin(), arr2.end(), [&i, &d](int e2) {
            return abs(i - e2) <= d;
        });
        if (pointer == arr2.end())
            result++;
    }
    return result;
}
};