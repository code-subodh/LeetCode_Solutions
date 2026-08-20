class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_freq;
        unordered_map<char, int> t_freq;
        for (char ch : s) {
            s_freq[ch]++;
        }
        for (char ch : t) {
            t_freq[ch]++;
        }
        // check
        if (s_freq == t_freq)
            return true;
        else
            return false;
    }
};