class Solution {
public:
    int mx = 0;
    int l=0,r=0;
    void help(string& s, int left, int right){
        while(left>=0 && right>=0 && left<s.size() && right<s.size() && s[left]==s[right]){
            if(mx < right - left){
                mx = right-left;
                l=left;
                r=right;
            }
            left--;
            right++;
        }
    }
    string longestPalindrome(string s) {
        for(int i =0; i<s.size(); i++){
            help(s,i,i);
            help(s,i,i+1);
        }
        return s.substr(l,mx+1);
    }
};
