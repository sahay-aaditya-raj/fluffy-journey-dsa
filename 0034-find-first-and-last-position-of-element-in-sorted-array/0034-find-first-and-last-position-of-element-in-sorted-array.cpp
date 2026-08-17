class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> res(2,-1);
        if(n==0) return {-1,-1};
        if(n==1 && target == nums[0]) return {0,0};
        if(n==1 && target != nums[0]) return {-1,-1};
        auto lb = lower_bound(nums.begin(),nums.end(), target);
        int l = lb-nums.begin();
        if(l<n && nums[l] == target) res[0] = l;
        else res[0] = -1;
        auto ub = upper_bound(nums.begin(),nums.end(), target);
        int u = ub-nums.begin();
        if(u>0 && nums[u-1] == target) res[1] = u-1;
        else res[1] = -1;
        return res;
    }
};