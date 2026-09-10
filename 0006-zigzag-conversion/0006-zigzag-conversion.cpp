class Solution {
public:
    string convert(string s, int numRows) {
        // intial check
        if (numRows == 1) {
            return s;
        }
        vector<string> Zigzag(numRows);
        int i = 0, row = 0;
        bool direction = 1; // Top -> bottom

        while (true) {
            // top to bottom
            if (direction) {
                while (row < numRows && i < s.size()) {
                    Zigzag[row++].push_back(s[i++]);
                }
                row = numRows - 2;
            }
            // down to top
            else {
                while (row >= 0 && i < s.size()) {
                    Zigzag[row--].push_back(s[i++]);
                }
                row = 1;
            }
            // loop termination condition
            if (i >= s.size())
                break;
            direction = !direction;
        }
        string ans = "";
        for (auto str : Zigzag) {
            ans += str;
        }
        return ans;
    }
};