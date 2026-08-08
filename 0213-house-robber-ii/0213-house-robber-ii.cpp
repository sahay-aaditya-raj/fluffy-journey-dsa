class Solution {
public:

    int x(vector<int>& nums, int l, int r) {
        int prev2 = nums[l];
        int prev1 = max(nums[l], nums[l+1]);
        for (int i = l+2; i < r; i++) {
            int temp = prev1;
            prev1 = max(nums[i] + prev2, prev1);
            prev2 = temp;

        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        if (nums.size() ==2 ) return max(nums[0],nums[1]);
        int a = x(nums,1,nums.size());
        int b = x(nums,0,nums.size()-1);
        return max(a,b);
    }
};