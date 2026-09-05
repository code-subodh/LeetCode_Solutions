class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";
        for (int i = 0; i < order.size(); i++) {
            char ch = order[i];
            while (s.find(ch) >= 0 && s.find(ch) < s.size()) {
                ans.push_back(ch);
                s.erase(s.find(ch), 1);
            }
        }
        for (char ch : s) {
            ans.push_back(ch);
        }
        return ans;
    }
};