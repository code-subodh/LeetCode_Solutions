class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }
        // Now find value
        int ans;
        for (auto it : mp) {
            if (it.second == 1) {
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};