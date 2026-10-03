class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for (auto digit : num) {
            while (k > 0 && !st.empty() && st.top() > digit) {
                st.pop();
                k--;
            }
            st.push(digit);
        }
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        // digits ko stack se nikalo
        string ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        // now delete last wale 0
        while (ans.size() > 0 && ans.back() == '0') {
            ans.pop_back();
        }
        reverse(ans.begin(), ans.end());
        return ans == "" ? "0" : ans;
    }
};