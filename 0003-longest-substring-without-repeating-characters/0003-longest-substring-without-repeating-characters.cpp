class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> a;
        int i = 0, j = 0, mx = 0;

        while (j < s.size()) {
            if (a.find(s[j]) == a.end()) {
                a.insert(s[j]);
                j++;
                mx = max(mx, j - i);
            } else {
                a.erase(s[i]);
                i++;
            }
        }
        return mx;
    }
};