class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it = lower_bound(nums.begin(),nums.end(),target);
        int x = it-nums.begin();
        if(x<0) return 0;
        return x;
    }
};