class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Method 1
        int ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                ans = nums[i];
                break;
            }
        }
        return ans;

        // // Method 2  Mark Index Negative..
        // int ans = -1;
        // for(int i = 0; i < nums.size(); i++){
        //     int index = abs(nums[i]);
        //     // check already visited(matlab negative hai kya)
        //     if(nums[index] < 0){
        //         ans = index;
        //         break;
        //     }
        //     // Visited mark kr do
        //     nums[index] *= -1;
        // }
        // return ans;

        // // Method 3 Positioning Method
        // while(nums[0]  != nums[nums[0]]){
        //     swap(nums[0], nums[nums[0]]);
        // }
        // return nums[0];

        // // using Hash Map
        // unordered_map<int, int> freq;
        // int ans;
        // for (int i = 0; i < nums.size(); i++) {
        //     freq[nums[i]]++;
        //     if (freq[nums[i]] > 1) {
        //         ans = nums[i];
        //         break;
        //     }
        // }
        // return ans;
    }
};