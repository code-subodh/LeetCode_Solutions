class Solution {
public:
    // vector<int> twoSum(vector<int>& nums, int target) {
    //     vector<int> ans;
    //     int n = nums.size();
    //     for(int i=0; i<n; i++) {
    //         for(int j=i+1; j<n; j++) {
    //             if(nums[i] + nums[j] ==  target) {
    //                 ans.push_back(i);
    //                 ans.push_back(j);
    //                 // break;
    //             }
    //         }
    //     }
    //     return ans;
    // }

    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int remaining = target - nums[i];
            if (mp.find(remaining) != mp.end()) {
                return {mp[remaining], i};
            }
            // insert in map
            mp[nums[i]] = i;
        }
        return {};
        //  TC : O(n)
        //  SC : O(n)
    }
};