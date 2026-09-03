class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int n = nums.size();
        int min = (n / 2) + 1;
        int ans = -1;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
            if (freq[nums[i]] == min) {
                ans = nums[i];
                break;
            }
        }
        return ans;
        // int max_count = INT_MIN;
        // int ans = INT_MIN;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (freq[nums[i]] > max_count) {
        //         max_count = freq[nums[i]];
        //         ans = nums[i];
        //     }
        // }
        // return ans;

        // // Optimal solution
        // int condidate = 0;
        // int count = 0;
        // for (int num : nums) {
        //     if (count == 0) {
        //         condidate = num;
        //     }
        //     if (num == condidate) {
        //         count++;
        //     } else {
        //         count--;
        //     }
        // }
        // return condidate;
    }
};