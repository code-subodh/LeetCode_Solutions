class Solution {
public:
    bool islast2digitsame(string& ans, char& newCh, int k_1) {
        int it = ans.size() - 1;
        while (k_1) {
            if (ans[it] != newCh)
                return false;
            it--;
            k_1--;
        }
        return true;
    }
    string removeDuplicates(string s, int k) {
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            char& newCh = s[i];
            if (ans.size() < k - 1) {
                ans.push_back(newCh);
            } else {
                if (islast2digitsame(ans, newCh, k - 1)) {
                    for (int j = 0; j < k - 1; j++) {
                        ans.pop_back();
                    }
                } else {
                    ans.push_back(newCh);
                }
            }
        }
        return ans;
    }
};