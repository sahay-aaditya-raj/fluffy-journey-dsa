class Solution {
public:
    bool isValid(string s) {
        vector<char> st;
        for (char x : s) {
            if (x == '[' || x == '{' || x == '(') {
                st.push_back(x);
            }
            else {
                if (st.empty())
                    return false;
                if (x == ')' && st.back() != '(')
                    return false;
                if (x == ']' && st.back() != '[')
                    return false;
                if (x == '}' && st.back() != '{')
                    return false;
                st.pop_back();
            }
        }
        return st.empty();
    }
};