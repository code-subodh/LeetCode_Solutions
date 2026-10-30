class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        // reverse whole array
        reverse(nums.begin(), nums.end());
        // reverse first k element
        reverse(nums.begin(), nums.begin() + k);
        // reverse last n-k element
        reverse(nums.begin() + k, nums.end());
    }
};