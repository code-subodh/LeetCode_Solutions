class Solution {
public:
    void nextPermutation(vector<int>& a) {
         int n = a.size();
         int ind = -1;
        // 1.find the breakPoint a[i] < a[i+1]
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] < a[i + 1]) {
                ind = i;
                break;
            }
        }
        // if no breakpoint that's mean last permutation so reverse it
        if (ind == -1) {
            reverse(a.begin(), a.end());
            return;
        }
        // 2. if breakpoint found
        //  breakpoint wale element se just bada element dekho
        for (int i = n - 1; i > ind; i--) {
            if (a[i] > a[ind]) {
                swap(a[i], a[ind]);
                break;
            }
        }
        // 3. breakpoint wale se aage k element ko increasing order mein kr do
        // matlab reverse kr do
        reverse(a.begin() + ind + 1, a.end());
    }
};