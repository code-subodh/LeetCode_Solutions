class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        string word = "";
        for (char ch : s) {
            if (ch == ' ') {
                v.push_back(word);
                word = "";
            } else {
                word += ch;
            }
        }
        v.push_back(word); // Store the last word

        if (pattern.size() != v.size()) {
            return false;
        }

        unordered_map<char, string> mp;
        unordered_map<string, char> rev;
        for (int i = 0; i < pattern.size(); i++) {
            char pattern_ch = pattern[i];
            if (mp.find(pattern_ch) != mp.end()) {
                if (mp[pattern_ch] != v[i]) {
                    return false;
                } 
            } else {
                mp[pattern_ch] = v[i];
            }

            if(rev.find(v[i]) != rev.end()){
                if(rev[v[i]] != pattern_ch){
                    return false;
                }
            }
            else{
                rev[v[i]] = pattern_ch;
            }
        }
        return true;
    }
};