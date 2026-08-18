class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int s = 0;
        int e = n - 1;
        int mid = s + (e - s) / 2;
        while (s <= e) {

            if (target == arr[mid]) {
                return mid;
            }
            if (target > arr[mid]) {
                // right mein jao
                s = mid + 1;
            } if(target < arr[mid]) {
                // left mein jao
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        // iska matlab element not found..
        return -1;
    }
};