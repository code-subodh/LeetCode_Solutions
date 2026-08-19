class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        for (int num : nums) {
            if (num == 0)
                count0++;
            if (num == 1)
                count1++;
            if (num == 2)
                count2++;
        }
        for (int i = 0; i <= count0 - 1; i++) {
            nums[i] = 0;
        }
        for (int i = count0; i <= (count0 + count1) - 1; i++) {
            nums[i] = 1;
        }
        for (int i = (count0 + count1); i <= nums.size() - 1; i++) {
            nums[i] = 2;
        }
    }
};