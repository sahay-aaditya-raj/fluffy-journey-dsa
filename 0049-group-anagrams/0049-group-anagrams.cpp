class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> h;
        for(auto x: strs){
            vector<int> count(26,0);
            for(auto c: x){
                count[c-'a']++;
            }
            string mystr = "";
            for(int i=0; i<26;i++){
                if(count[i]!=0) mystr+="#"+to_string(i)+"."+to_string(count[i]);
            }
            h[mystr].push_back(x);
        }
        vector<vector<string>> res;
        for(auto a: h){
            res.push_back(a.second);
        }
        return res;
    }
};
