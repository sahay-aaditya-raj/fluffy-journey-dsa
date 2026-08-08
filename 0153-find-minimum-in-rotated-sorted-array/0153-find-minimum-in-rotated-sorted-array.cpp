class Solution {
public:
    int findMin(vector<int> &nums) {
        int r=nums.size()-1;
        int l=0;
        while(l<r){
            int m = l+(r-l)/2;
            if(nums[m]>nums[r]) l=m+1;
            else r=m;
        }
        return nums[l];
    }
};
