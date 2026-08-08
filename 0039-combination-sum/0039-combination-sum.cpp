class Solution {
public:
    vector<vector<int>> res;
    void backtrack(vector<int>& nums, int target, int idx, vector<int>& sub){
        if(target<=0 || idx==nums.size()){
            if(target==0) res.push_back(sub);
            return;
        }
        // take current
        sub.push_back(nums[idx]);
        backtrack(nums, target-nums[idx], idx, sub);
        // dont take current
        sub.pop_back();
        backtrack(nums, target, idx+1, sub);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> sub;
        backtrack(nums, target,0,sub);
        return res;
    }
};
