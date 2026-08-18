class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans = 0;
        int ansIndex = -1;
        for (int i = 0; i < arr.size(); i++) {
            ans = max(ans, arr[i]);
            if (ans == arr[i]) {
                ansIndex = i;
            }
        }
        return ansIndex;
    }
};