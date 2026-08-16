class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = 0;
        int c = 0;
        while(r<n){
            if(nums[l] == nums[r]){
                r++;
            } else {
                l++;
                swap(nums[l],nums[r++]);
                c++;
            }
        }
        return c+1;
    }
};