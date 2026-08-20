class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        while(l<r){
            int val = nums[l]+nums[r];
            if(val == target) return {l+1,r+1};
            if(val>target) r--;
            else l++;
        }
        return {-1,-1};
    }
};