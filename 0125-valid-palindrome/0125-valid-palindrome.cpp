class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> res;
        for(char c:s){
            char l = tolower(c);
            if((l>='a' && l<='z') || (l>='0' && l<='9')) res.emplace_back(l);
        }
        int n = res.size();
        for(int i = 0; i<n/2; i++){
            if(res[i]!=res[n-i-1]) return false;;
        }
        return true;
    }
};