class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        int max_count = INT_MIN;
        int ans = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (freq[nums[i]] > max_count) {
                max_count = freq[nums[i]];
                ans = nums[i];
            }
        }
        return ans;
    }
};