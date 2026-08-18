class Solution {
public:
    int getFirstIndex(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int ansIndex = -1;
        int mid = s + (e - s) / 2;
        while (s <= e) {
            if (nums[mid] == target) {
                // store
                ansIndex = mid;
                // compute
                e = mid - 1;
            }
            if (target > nums[mid]) {
                // go right
                s = mid + 1;
            }
            if (target < nums[mid]) {
                // go left
                e = mid - 1;
            }
            // update mid
            mid = s + (e - s) / 2;
        }
        return ansIndex;
    }
    int getLastIndex(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int ansIndex = -1;
        int mid = s + (e - s) / 2;
        while (s <= e) {
            if (nums[mid] == target) {
                // store
                ansIndex = mid;
                // compute
                s = mid + 1;
            }
            if (target > nums[mid]) {
                // go right
                s = mid + 1;
            }
            if (target < nums[mid]) {
                // go left
                e = mid - 1;
            }
            // update mid
            mid = s + (e - s) / 2;
        }
        return ansIndex;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {getFirstIndex(nums, target),
                           getLastIndex(nums, target)};
        return ans;
    }
};