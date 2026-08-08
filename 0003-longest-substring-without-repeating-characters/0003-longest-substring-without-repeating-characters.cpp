class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> a;
        int n = s.size();
        int i=0,j=0;
        int mx = 0;
        int cur = 0;
        while(j<n){
            if(a.find(s[j]) == a.end()){
                a.insert(s[j]);
                cur++;
                j++;
            }
            else {
                a.erase(s[i]);
                i++;
                cur--;
            }
            mx = max(mx,cur);
        }
        return mx;
    }
};
