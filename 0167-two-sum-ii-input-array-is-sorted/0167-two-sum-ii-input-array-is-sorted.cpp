class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            int nd = target - nums[i];
            auto it = lower_bound(nums.begin() + i + 1, nums.end(), nd);
            if(it != nums.end() && *it == nd) {
                int j = it - nums.begin();
                return {i + 1, j + 1};
            }
        }
        return {-1, -1};
    }
};