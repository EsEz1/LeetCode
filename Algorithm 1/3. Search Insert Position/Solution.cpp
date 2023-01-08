class Solution {
public:
    int searchInsert(vector<int> &nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int idx = -1;
        while (start <= end) {
            int mid = (start + end) >> 1;
            if (nums[mid] == target) {
                idx = mid;
                break;
            } else if (nums[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        if (idx == -1) {
            return end + 1;
        } else {
            return idx;
        }
    }
};