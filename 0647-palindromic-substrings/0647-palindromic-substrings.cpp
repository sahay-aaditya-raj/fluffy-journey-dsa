class Solution {
public:
    int c = 0;
    void expand(string& s, int l, int r){
        int n = s.size();
        while(l>=0 && r>=0 && l<n && r<n && s[l]==s[r]){
            c++;
            l--;
            r++;
        }
    }
    int countSubstrings(string s) {
        for(int i = 0; i<s.size(); i++){
            expand(s,i,i);
            expand(s,i,i+1);
        }
        return c;
    }
};