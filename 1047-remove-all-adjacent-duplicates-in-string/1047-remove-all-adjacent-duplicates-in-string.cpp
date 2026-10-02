class Solution {
public:
    string removeDuplicates(string s) {
        // string ans = "";
        // for (char ch : s) {
        //     if (!ans.empty() && ans.back() == ch) {
        //         ans.pop_back();
        //     } else {
        //         ans.push_back(ch);
        //     }
        // }
        // return ans;




        // using stack
        stack<char>st;
        for(auto ch : s){
            if(!st.empty() && st.top() == ch){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        string ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};