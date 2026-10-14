class Solution {
public:
    string reorganizeString(string s) {

        unordered_map<char, int> mp;

        // Step 1: frequency count
        for(char ch : s) {
            mp[ch]++;
        }

        // Step 2: find maximum frequency character
        char maxChar;
        int maxFreq = 0;

        for(auto it : mp) {
            if(it.second > maxFreq) {
                maxFreq = it.second;
                maxChar = it.first;
            }
        }

        // Step 3: impossible condition
        if(maxFreq > (s.length() + 1) / 2) {
            return "";
        }

        string ans(s.length(), ' ');

        int index = 0;

        // Step 4: put max frequency character first
        while(mp[maxChar] > 0) {
            ans[index] = maxChar;
            mp[maxChar]--;

            index += 2;

            if(index >= s.length()) {
                index = 1;
            }
        }

        // Step 5: put remaining characters
        for(auto it : mp) {

            char ch = it.first;

            while(it.second > 0) {

                ans[index] = ch;
                it.second--;

                index += 2;

                if(index >= s.length()) {
                    index = 1;
                }
            }
        }

        return ans;
    }
};